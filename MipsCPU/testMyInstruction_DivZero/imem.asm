addi $t0, $zero, 0
addi $t1, $zero, 10
addi $t2, $zero, 20
addi $t4, $zero, -10

mul $t3, $t1, $t2
sw $t3, 0($t0)
addi $t0, $t0, 4		#200

slt $t3, $t4, $t2
sw $t3, 0($t0)
addi $t0, $t0, 4		#1

sltu $t3, $t4, $t2
sw $t3, 0($t0)
addi $t0, $t0, 4		#0

sll $t3, $t1, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#40

srl $t3, $t1, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#2

sra $t3, $t4, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#-3

addiu $t3, $t1, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#12

ori $t3, $t1, 3
sw $t3, 0($t0)
addi $t0, $t0, 4		#11

xori $t3, $t1, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#8

slti $t3, $t4, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#1

sltiu $t3, $t4, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#0

lui $t3, 2
sw $t3, 0($t0)
addi $t0, $t0, 4		#131072

lh $t3, -2($t0)
sw $t3, 0($t0)
addi $t0, $t0, 4		#2

lhu $t3, -6($t0)
sw $t3, 0($t0)
addi $t0, $t0, 4		#2

lb $t3, 0($zero)
sw $t3, 0($t0)
addi $t0, $t0, 4		#-56

lbu $t3, 0($zero)
sw $t3, 0($t0)
addi $t0, $t0, 4		#200

addi $t3, $zero, 10
sb $t3, 1($t0)
addi $t0, $t0, 4		#2560

addi $t3, $zero, 10
sh $t3, 2($t0)
addi $t0, $t0, 4		#655360

bgez $t0, next
break

next:beq $0, $0, next2
break

next2:div $t1, $t2, $zero	#cause = 3


#100:self : beq $0, $0, self

