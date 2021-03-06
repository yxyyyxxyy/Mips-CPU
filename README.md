# lab07 MIPS CPU

*注：ExControl模块的 we = PCadd4 < 400? 1'b1: 1'b0; 表示当PC小于400时允许单步中断，方便下载到板子上测试（因为我的异常处理地址是400，只需在400处jr EPC即可，这样相当于禁止了异常处理过程中的单步中断） 此语句可改为当允许单步中断时 we = 1。电路不会修改SingleStep的值，需要外界设置，电路只会在允许单步中断时检测它，如果为1则在周期结束时进行异常处理*

## 实验说明

 - 实现了37条指令，包括
    -   要求的16条指令：add addi addu  sub subu and andi or nor xor bgtz bne j jr lw sw
    -   新增的20条指令：mul slt sltu sll srl sra andiu ori xori slti sltiu lui beq lh lhu lb lbu sb sh bgez 
    -   断点指令：break


 - 实现了4种中断，包括
    - 断点中断
    - 除以零中断
    - 单步中断
    - 溢出中断


 - 采用五级流水线，包含完全的转发
    - ALU - ALU 旁路
    - lw 数据冒险检测
    - 寄存器内部旁路
    - 提前分支到 ID 级
    - 控制冒险检测和提前分支的旁路
    - 4种异常处理


 - 实现下载，开关查看 DMEM 内存
    - 开发板Nexys2
    - 可查看指定地址的 DMEM 高16位或低16位
    - 可reset
    - 可单步


## 详细介绍

### 平台及参数

 - 平台： ISE 14.7
 - 开发板： Nexys2
 - 时钟频率： 50 MHz

| Property Name | Value   |
| --------   | ----- |
| Top-Level Source Type     | HDL |
| Family        |   Spartan3E   |
| Device        |    XC3S500E    |
| Package        |    FG320    |
| Speed        |    -5    |
| Preferred Language     |    Verilog    |


### 下载及使用方法


 - 七段数码管
   - 16进制，显示 DMEM 中某个数据的16位
 - 开关
   - 后六个开关输入地址查看内存中的数据
   - 第一个开关打开则显示高16位，关闭则显示低16位
   - 第二个开关打开时为单步模式
 - 按钮
   - 第四个按钮为 reset
   - 第一个按钮为单步按钮，在单步模式下每按一次会执行一条指令。（含防抖电路，需使劲按）
 - LED灯
   - 后面为异常指示灯，对应Cause寄存器，后面会详述
   - 第一个为单步灯，按下单步按钮会亮一秒表示成功按下按钮
   - 第二个为调试所用。

### 各个附加功能的说明

#### 异常处理

发生四种异常之一时会将发生异常指令的 PC + 4 保存在EPC寄存器中，异常信息会保存在Cause寄存器中，PC会变成固定的异常处理地址，暂时设定为400。

EPC 和 Cause 均有读端口，EPC 可以通过仿真读出中断发生的地址，Cause 已经连在 LED 灯上。


| 异常名称 | Cause 寄存器值   |
| --------   | ----- |
| 无异常    | 0 |
|溢出       |   1  |
| 断点        |    2    |
| 除以零        |   3  |
| 单步      |    4   |

注：没有实现 div 指令，因为除号不能综合，而且没有机器码。自定义机器码 op = 000000，funct = 111111 表示 div $rd, $rs, $rt 指令，这个指令没有效果，但是当除数为0时会发生中断。


#### 转发

  - ALU - ALU 旁路
     - 将 MEM 级和 WB 级的数据旁路到 EX 级
     - 解决了R型指令之间的数据冒险
     - 解决了R型指令 + lw / sw 等的冒险
     - 解决了相隔一条指令的 lw + 其他指令的冒险
  - lw 数据冒险检测
     - 将 lw + 其他指令之间插入1个气泡
     - 将R型指令 + 分支指令之间插入一个气泡
     - 将 lw + 分支指令之间插入2个气泡
     - 使以上几种指令接下来由各个旁路模块解决
  - 寄存器内部旁路
     - 保证寄存器先写后读
  - 分支提前
     - 将条件分支指令提前到 ID 级完成
     - 假设分支不发生正常取指令
  - 控制冒险检测和提前分支的旁路
     - 将 MEM 级和 WB 级的数据旁路到 ID 级 
     - 指令 + 阻塞后的跳转指令之间的旁路


## 实验结果

### 斐波那契数列测试

#### 说明

汇编源代码和说明、IMEM.coe、DMEM.coe 均在 testFibonacci_Overflow 文件夹中

执行斐波那契数列求和，前两项为3 + 3，一直加下去，直到溢出并进入异常处理。在异常处理地址400处是一个跳转到自己的指令，停下来。

#### 结果

从仿真结果可以看到 Cause 寄存器最终值为1，表示发生溢出，EPC保存了出错的PC + 4 

因为跳转指令后一条也会执行（而后会被flush掉，即变成0），可以看到PC稳定在400和404
注：仿真的PC是IF级的PC，Instruction是ID级得到的指令机器码

DMEM结果正确
可以看到2104226199是最后一个没有溢出的数，下一个溢出的数没有写入DMEM，而引发溢出中断。


### 各个冒险的测试

#### 说明

汇编源代码和说明、IMEM.coe、DMEM.coe 均在 testHazard_Break 文件夹中

这个测试中故意写了包含各种相关的指令，用于测试冒险的处理。最后以一个break结束

#### 结果

可以看到 Cause 寄存器最终值为2，表示发生断点中断，EPC保存了出错的PC + 4 
DMEM结果正确


### 新增指令的测试（20条）

#### 说明

汇编源代码和说明、IMEM.coe、DMEM.coe 均在 testMyInstruction_DivZero 文件夹中

这个测试中测试了所有新增的指令。最后以一个除以零指令结束

#### 结果

可以看到 Cause 寄存器最终值为3，表示发生除以零中断，EPC保存了出错的PC + 4 
DMEM结果正确

### 规定指令的测试（16条）

#### 说明

汇编源代码和说明、IMEM.coe、DMEM.coe 均在 test16Instructions 文件夹中

这个测试中测试了所有规定的指令。

#### 结果

DMEM结果正确
