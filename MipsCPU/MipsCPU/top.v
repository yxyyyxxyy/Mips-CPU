`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:28:50 05/30/2018 
// Design Name: 
// Module Name:    top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module top(
	input clk, rst, selhigh16bit, singlestep_sw, singlestep_btn,
	input [5:0] addr,
	output [31:0] testPC, testInstruction, 
//	output [31:0] test1, test2, test3, test4,		//for test
	output [31:0] PCout,
	output [7:0] led,
	output [2:0] causeout,
	output [3:0] sel4,
	output [6:0] seg7
    );

parameter EXPC = 400;

wire rst_n;	 

wire [31:0] PC0, Instruction0, DMEMdatain32b, Instruction1, REGdata1out, REGdata2out, REGMUXdata1out, REGMUXdata2out, REGdata1, REGdata2, ALUnum1, ALUMUXnum;
wire [31:0] ALUnum2, ALUResult, ALUResult1, DMEMdataout, DMEMdataout1, PCadd4, PCadd41, SSPCin, jumpaddress, ImmNum, ImmNum1, expc4, ImmforPCAdd, beqaddress;
wire [31:0] WBData, ALUResult2, DMEMdataout32b, DMEMdatain, RightPC, PCin, WBDataREGout1, WBDataREGout2, REGdata1notsure, REGdata2notsure, data32toseg, PCadd42, PCadd43;
wire [27:0] shiftInstr25;
wire [15:0] data16toseg;
wire [4:0] Rt1, Rd1, Rx1, Rx2, Rx3, H1Rs, shex;
wire [2:0] excause;
wire [1:0] RA, RB, DA, DB;
wire noteq, and1res, or2res, bigger, and3res, or4res, flush0, flush1, flush2, RegWrite1, RegWrite2, RegWrite3, MemRead1, MemRead2, Blk;
wire we0, or6res, ALUSrc1, MemWrite1, MemWrite2, MemToReg1, MemToReg2, MemToReg3, RegDst1, IA, IB, exwe, beq0, ss, bgez0, divzero, singleStepSel;

wire RegWrite0, ALUSrc0, MemWrite0, MemToReg0, BNE0, JR0, J0, BGTZ0, CF, RegDst0, MemRead0, INT, Break, lsb, lsh, lu, lsb1, lsh1, lu1, lsb2, lsh2, lu2;
wire [4:0] ALUop0, ALUop1;
wire ol, myClk;

assign rst_n = ~rst;

assign testPC = PC0,					
		 testInstruction = Instruction1;
		 
//assign test1 = DMEMdatain32b,		//for test
//		 test2 = DMEMdatain;
//		 test3 = ALUnum1,
//		 test4 = ALUnum2;
		 
		 
assign data16toseg = selhigh16bit ? data32toseg[31:16] : data32toseg[15:0];

DownloadLed LedForDownload (
    .ssled(ssled), .ol(ol),
    .causeout(causeout), 
    .led(led)
    );

getOneSecClk getOneSecClk (
    .clk(clk), 
	 .rst(rst),
    .myClk(myClk)
    );

SingleStepLedForDownload SingleStepLedForDownload (
    .myClk(myClk), 
	 .rst(rst | singleStepSel),
    .op(ssled)
    );

SingleStepForDownload SingleStepForDownload (
    .btn(singlestep_btn), 
    .rst(rst), 
    .singlestep(singlestep_sw), 
    .clk(clk), .ol(ol),
    .singleStepSel(singleStepSel)
    );

MUX32_4_1 MUX7 (
    .data00(PCadd4), 
    .data01(jumpaddress), 
    .data10(beqaddress), 
    .data11(REGMUXdata1out), 
    .sel({or2res, J0}), 
    .dataout(RightPC)
    );

REG_FILE REG_FILE (
    .clk(clk), 
    .rst_n(rst_n),
    .rAddra({1'b0, Instruction1[25:21]}), 
    .rAddrb({1'b0, Instruction1[20:16]}), 
    .rDouta(REGdata1notsure), 
    .rDoutb(REGdata2notsure), 
    .wAddr({1'b0, Rx3}), 
    .wDin(WBData), 
    .wEna(RegWrite3)
    );

EXControl EXControl (
    .CF(CF), 
    .Break(Break), 
	 .divzero(divzero),
	 .singlestep(singlestep_sw),
	 .PCadd4(PCadd4),
    .PCadd41(PCadd41), 
    .PCadd42(PCadd42), 
    .PCadd43(PCadd43), 
    .we(exwe), 
	 .ss(ss),
    .PC(expc4), 
    .cause(excause)
    );

EPC EPC (
    .clk(clk), 
    .rst(rst), 
    .we(exwe), 
    .PCin(expc4), 
    .PCout(PCout)
    );


Cause Cause (
    .clk(clk), 
    .rst(rst), 
    .we(exwe), 
    .causein(excause), 
    .causeout(causeout)
    );


seg myseg (
    .clk(clk), 
    .rst_n(rst_n), 
    .data_in(data16toseg), 
    .sel(sel4), 
    .data(seg7)
    );
	 
RegsInsideHazard RegsInsideHazard (
    .writeaddr(Rx3), 
    .readaddr1(Instruction1[25:21]), 
    .readaddr2(Instruction1[20:16]), 
    .data(WBData), 
    .we(RegWrite3), 
    .outdata1(WBDataREGout1), 
    .outdata2(WBDataREGout2), 
    .IA(IA), 
    .IB(IB)
    );

MUX32_2_1 MUX10 (
    .data0(REGdata1notsure), 
    .data1(WBDataREGout1), 
    .sel(IA), 
    .dataout(REGdata1out)
    );
	 
MUX32_2_1 MUX11 (
    .data0(REGdata2notsure), 
    .data1(WBDataREGout2), 
    .sel(IB), 
    .dataout(REGdata2out)
    );

DMEM DMEM (
  .a(ALUResult1[11:2]), // input [9 : 0] a
  .d(DMEMdatain32b), // input [31 : 0] d
  .dpra({4'b0, addr}), // input [9 : 0] dpra
  .clk(clk), // input clk
  .we(MemWrite2), // input we
  .spo(DMEMdataout32b), // output [31 : 0] spo
  .dpo(data32toseg) // output [31 : 0] dpo
);

storebh storebh (
    .din(DMEMdatain), 
    .memin(DMEMdataout32b), 
    .offset(ALUResult1[1:0]), 
    .lsb(lsb2), 
    .lsh(lsh2), 
    .dout(DMEMdatain32b)
    );
	 
halfword halfword (
    .din(DMEMdataout32b), 
    .offset(ALUResult1[1:0]), 
    .lsh(lsh2), 
    .lsb(lsb2), 
    .lu(lu2), 
    .dout(DMEMdataout)
    );

or or6(or6res, CF, INT, Break, ss);

MUX32_2_1 MUX9 (
    .data0(RightPC), 
    .data1(EXPC), 
    .sel(or6res), 
    .dataout(PCin)
    );
	 
MUX32_2_1 MUX_PC_SingleStep (
    .data0(PCin), 
    .data1(PCout), 
    .sel(singleStepSel), 
    .dataout(SSPCin)
    );

PCDFF PCRegister (
    .clk(clk), 
    .rst_n(rst_n), 
    .indata(SSPCin), 
    .we(we0), 
    .outdata(PC0)
    );

ADD4 ADD4 (
    .indata(PC0), 
    .outdata(PCadd4)
    );

SDFF IF_ID_PCadd4_32 (
    .clk(clk), 
    .flush(flush0), 
    .rst(rst), 
    .indata(PCadd4), 
    .we(we0), 
    .outdata(PCadd41)
    );

SDFF ID_EX_PCadd4_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(PCadd41), 
    .we(1'b1), 
    .outdata(PCadd42)
    );

SDFF EX_MEM_PCadd4_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(PCadd42), 
    .we(1'b1), 
    .outdata(PCadd43)
    );
	 

ADD32B PCADDALU (
    .datain1(ImmforPCAdd), 
    .datain2(PCadd41), 
    .outdata(beqaddress)
    );
	 
ShiftLeft2b25 jumpShiftLeft (
    .indata(Instruction1[25:0]), 
    .outdata(shiftInstr25)
    );
	 
assign jumpaddress = {PCadd41[31:28], shiftInstr25};

biggerThan0 biggerThan0 (
    .data(REGMUXdata1out),
	 .bgez0(bgez0),	 
    .bigger(bigger)
    );

and and3(and3res, bigger, BGTZ0);

IMEM IMEM (
  .a(PC0 >> 2), // input [9 : 0] a
  .spo(Instruction0) // output [31 : 0] spo
);

SDFF IF_ID_Instruction0_32 (
    .clk(clk), 
    .flush(flush0), 
    .rst(rst), 
    .indata(Instruction0), 
    .we(we0), 
    .outdata(Instruction1)
    );

SEXT16_32 IMMSEXT (
    .indata(Instruction1[15:0]), 
    .outdata(ImmNum)
    );

SDFF ID_EX_IMMNUM_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(ImmNum), 
    .we(1'b1), 
    .outdata(ImmNum1)
    );

ShiftLeft2b31 Imm31Shift (
    .datain(ImmNum), 
    .dataout(ImmforPCAdd)
    );
	 
MUX32_4_1 MUX1 (
    .data00(REGdata1out), 
    .data01(ALUResult1), 
    .data10(WBData), 
    .data11(0), 
    .sel(DA), 
    .dataout(REGMUXdata1out)
    );
	 
MUX32_4_1 MUX2 (
    .data00(REGdata2out), 
    .data01(ALUResult1), 
    .data10(WBData), 
    .data11(0), 
    .sel(DB), 
    .dataout(REGMUXdata2out)
    );

NotEqual NotEqual (
	.beq0(beq0),
    .data1(REGMUXdata1out), 
    .data2(REGMUXdata2out), 
    .noteq(noteq)
    );

and and1(and1res, noteq, BNE0);
or or2(or2res, and1res, and3res,JR0);
or or4(or4res, and3res, and1res, J0, CF, Break);
assign flush0 = or4res;

SDFF ID_EX_REGdata1_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(REGMUXdata1out), 
    .we(1'b1), 
    .outdata(REGdata1)
    );
	 
SDFF ID_EX_REGdata2_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(REGMUXdata2out), 
    .we(1'b1), 
    .outdata(REGdata2)
    );

SDFF5 ID_EX_Instr2016_5 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(Instruction1[20:16]), 
    .we(1'b1), 
    .outdata(Rt1)
    );
	 
SDFF5 ID_EX_Instr1511_5 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(Instruction1[15:11]), 
    .we(1'b1), 
    .outdata(Rd1)
    );

MUX32_4_1 MUX3 (
    .data00(REGdata1), 
    .data01(ALUResult1), 
    .data10(WBData), 
    .data11(0), 
    .sel(RA), 
    .dataout(ALUnum1)
    );
	 
MUX32_4_1 MUX4 (
    .data00(REGdata2), 
    .data01(ALUResult1), 
    .data10(WBData), 
    .data11(0), 
    .sel(RB), 
    .dataout(ALUMUXnum)
    );

SDFF EX_MEM_ALUMUXNUM_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(ALUMUXnum), 
    .we(1'b1), 
    .outdata(DMEMdatain)
    );

MUX32_2_1 MUX5 (
    .data0(ImmNum1), 
    .data1(ALUMUXnum), 
    .sel(ALUSrc1), 
    .dataout(ALUnum2)
    );

MUX5_2_1 MUX8 (
    .data0(Rt1), 
    .data1(Rd1), 
    .sel(RegDst1), 
    .dataout(Rx1)
    );

SDFF5 EX_MEM_Rx_5 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(Rx1), 
    .we(1'b1), 
    .outdata(Rx2)
    );
	 
SDFF5 MEM_WB_Rx_5 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(Rx2), 
    .we(1'b1), 
    .outdata(Rx3)
    );
	 
SDFF5 ID_EX_Instr2521_5 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(Instruction1[25:21]), 
    .we(1'b1), 
    .outdata(H1Rs)
    );

ALU ALU (
    .alu_a(ALUnum1), 
    .alu_b(ALUnum2), 
    .alu_op(ALUop1), 
	 .sh(shex),
    .alu_out(ALUResult),
	 .overflow(flush2),
	 .divzero(divzero)
    );
	 
SDFF EX_MEM_ALUResult_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(ALUResult), 
    .we(1'b1), 
    .outdata(ALUResult1)
    );
	 
	 
SDFF MEM_WB_ALUResult1_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(ALUResult1), 
    .we(1'b1), 
    .outdata(ALUResult2)
    );	 

SDFF MEM_WB_DMEMdataout_32 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(DMEMdataout), 
    .we(1'b1), 
    .outdata(DMEMdataout1)
    );

MUX32_2_1 MUX6 (
    .data0(DMEMdataout1), 
    .data1(ALUResult2), 
    .sel(MemToReg3), 
    .dataout(WBData)
    );
	 
RtypeHazard RtypeHazard (
    .Rs(H1Rs), 
    .Rt(Rt1), 
    .Rd1(Rx2), 
    .Rd2(Rx3), 
    .RW2(RegWrite2), 
    .RW3(RegWrite3), 
    .RA(RA), 
    .RB(RB)
    );
	 
lwBlockHazard lwBlockHazard (
    .Dst(Rx1), 
    .Rt(Instruction1[20:16]), 
    .Rs(Instruction1[25:21]), 
    .BNE(BNE0), 
    .JR(JR0), 
    .MR2(MemRead2), 
    .Dst2(Rx2), 
    .J(J0), 
    .WB(RegWrite1), 
    .MR(MemRead1), 
    .BGTZ(BGTZ0),
	 .Blk(Blk)
    );
	 
not not5(we0, Blk);

EarlyBranchHazard EarlyBranchHazard (
    .J(J0), 
    .JR(JR0), 
    .BNE(BNE0), 
    .BGTZ(BGTZ0), 
    .RW2(RegWrite2), 
    .RW3(RegWrite3), 
    .Rs(Instruction1[25:21]), 
    .Rt(Instruction1[20:16]), 
    .Rd1(Rx2), 
    .Rd2(Rx3), 
    .DA(DA), 
    .DB(DB)
    );

or or7(flush1, Blk, CF);

SDFF1 ID_EX_RegWrite_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(RegWrite0), 
    .we(1'b1), 
    .outdata(RegWrite1)
    );

SDFF1 ID_EX_lsh_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(lsh), 
    .we(1'b1), 
    .outdata(lsh1)
    );


SDFF1 ID_EX_lsb_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(lsb), 
    .we(1'b1), 
    .outdata(lsb1)
    );
	 

SDFF1 ID_EX_lu_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(lu), 
    .we(1'b1), 
    .outdata(lu1)
    );

SDFF1 EX_MEM_RegWrite_1 (
    .clk(clk), 
    .flush(flush2), 
    .rst(rst), 
    .indata(RegWrite1), 
    .we(1'b1), 
    .outdata(RegWrite2)
    );
	 
SDFF1 EX_MEM_lsh_1 (
    .clk(clk), 
    .flush(flush2), 
    .rst(rst), 
    .indata(lsh1), 
    .we(1'b1), 
    .outdata(lsh2)
    );
	 
SDFF1 EX_MEM_lsb_1 (
    .clk(clk), 
    .flush(flush2), 
    .rst(rst), 
    .indata(lsb1), 
    .we(1'b1), 
    .outdata(lsb2)
    );
	 
SDFF1 EX_MEM_lu_1 (
    .clk(clk), 
    .flush(flush2), 
    .rst(rst), 
    .indata(lu1), 
    .we(1'b1), 
    .outdata(lu2)
    );
	 
SDFF1 MEM_WB_RegWrite_1 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(RegWrite2), 
    .we(1'b1), 
    .outdata(RegWrite3)
    );
	 
SDFF1 ID_EX_ALUSrc_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(ALUSrc0), 
    .we(1'b1), 
    .outdata(ALUSrc1)
    );

SDFF1 ID_EX_MemWrite_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(MemWrite0), 
    .we(1'b1), 
    .outdata(MemWrite1)
    );
	 
SDFF1 EX_MEM_MemWrite_1 (
    .clk(clk), 
    .flush(flush2), 
    .rst(rst), 
    .indata(MemWrite1), 
    .we(1'b1), 
    .outdata(MemWrite2)
    );
	 
SDFF1 ID_EX_MemToReg_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(MemToReg0), 
    .we(1'b1), 
    .outdata(MemToReg1)
    );
	 
SDFF1 EX_MEM_MemToReg_1 (
    .clk(clk), 
    .flush(flush2), 
    .rst(rst), 
    .indata(MemToReg1), 
    .we(1'b1), 
    .outdata(MemToReg2)
    );
	 
SDFF1 MEM_WB_MemToReg_1 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(MemToReg2), 
    .we(1'b1), 
    .outdata(MemToReg3)
    );

SDFF1 ID_EX_RegDst_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(RegDst0), 
    .we(1'b1), 
    .outdata(RegDst1)
    );

SDFF1 ID_EX_MemRead_1 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(MemRead0), 
    .we(1'b1), 
    .outdata(MemRead1)
    );

SDFF1 EX_MEM_MemRead_1 (
    .clk(clk), 
    .flush(flush2), 
    .rst(rst), 
    .indata(MemRead1), 
    .we(1'b1), 
    .outdata(MemRead2)
    );

SDFF5 ID_EX_ALUop_5 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(ALUop0), 
    .we(1'b1), 
    .outdata(ALUop1)
    );
	 
SDFF5 ID_EX_sh_5 (
    .clk(clk), 
    .flush(flush1), 
    .rst(rst), 
    .indata(Instruction1[10:6]), 
    .we(1'b1), 
    .outdata(shex)
    );

ControlUnit ControlUnit (
    .clk(clk), 
	 .rst(rst),
	 .Break(Break),
	 .beq0(beq0),
	 .bgez0(bgez0),
	 .overflow(flush2),
	 .divzero(divzero),
    .op(Instruction1[31:26]), 
    .funct(Instruction1[5:0]), 
    .RegWrite0(RegWrite0), 
    .ALUSrc0(ALUSrc0), 
    .MemWrite0(MemWrite0), 
    .MemToReg0(MemToReg0), 
    .BNE0(BNE0), 
    .JR0(JR0), 
    .J0(J0), 
    .BGTZ0(BGTZ0), 
    .CF(CF), 
    .RegDst0(RegDst0), 
    .MemRead0(MemRead0), 
    .INT(INT), 
	 .lsb(lsb),
	 .lsh(lsh),
	 .lu(lu),
    .ALUop(ALUop0)
    );

endmodule
