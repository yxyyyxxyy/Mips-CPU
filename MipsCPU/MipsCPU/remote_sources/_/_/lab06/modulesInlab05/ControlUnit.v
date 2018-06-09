`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:47:36 04/25/2018 
// Design Name: 
// Module Name:    ControlUnit 
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
module ControlUnit(
	 input clk, rst, overflow, divzero,
    input [5:0] op, funct, 
	 output RegWrite0, ALUSrc0, MemWrite0, MemToReg0, BNE0, JR0, J0, BGTZ0, CF, RegDst0, MemRead0, INT,
	 output reg Break, beq0, bgez0, lsb, lsh, lu,
	 output [4:0] ALUop
    );

	 parameter A_NOP = 5'h00;
	 parameter A_ADD = 5'h01;
	 parameter A_SUB = 5'h02;
	 parameter A_AND = 5'h03;
	 parameter A_OR =  5'h04;
	 parameter A_XOR = 5'h05;
	 parameter A_NOR = 5'h06;
	 parameter A_ADDU = 5'h07;
	 parameter A_SUBU = 5'h08;
	 parameter A_SLT = 5'h09;
	 parameter A_SLTU = 5'h0a;
	 parameter A_MUL = 5'h0b;
	 parameter A_MULU = 5'h0c;
	 parameter A_DIV = 5'h0d;
	 parameter A_LUI = 5'h0e;
	 parameter A_SLL = 5'h0f;
	 parameter A_SRL = 5'h10;
	 parameter A_SRA = 5'h11;

	reg [16:0] temp;
	assign {RegWrite0, ALUSrc0, MemWrite0, MemToReg0, BNE0, JR0, J0, BGTZ0, CF, RegDst0, MemRead0, INT, ALUop} = temp;

always @ (*)
begin
	{beq0, Break, bgez0, lsb, lsh, lu} = 6'b000000;
	if(rst) temp = 0;
	else	begin
	
		if(overflow) begin
			temp = {12'b0000_0000_1000, A_NOP};
		end
		
		else if(divzero) begin
			temp = {12'b0000_0000_1000, A_NOP};
		end
		
		else begin 
		casex({op, funct})
			
		//R-type
			12'b000000_100000: temp = {12'b1101_0000_0100, A_ADD};		//add
			12'b000000_100001: temp = {12'b1101_0000_0100, A_ADDU};		//addu
			12'b000000_100010: temp = {12'b1101_0000_0100, A_SUB};		//sub
			12'b000000_100011: temp = {12'b1101_0000_0100, A_SUBU};		//subu
			12'b000000_100100: temp = {12'b1101_0000_0100, A_AND};		//and
			12'b000000_100101: temp = {12'b1101_0000_0100, A_OR};			//or
			12'b000000_100110: temp = {12'b1101_0000_0100, A_XOR};		//xor
			12'b000000_100111: temp = {12'b1101_0000_0100, A_NOR};		//nor
			12'b011100_000010: temp = {12'b1101_0000_0100, A_MUL};		//mul
			12'b000000_101010: temp = {12'b1101_0000_0100, A_SLT};		//slt
			12'b000000_101011: temp = {12'b1101_0000_0100, A_SLTU};		//sltu
			12'b000000_001000: temp = {12'b0000_0110_0000, A_NOP};		//jr
			12'b000000_000000: temp = {12'b1101_0000_0100, A_SLL};		//sll
			12'b000000_000010: temp = {12'b1101_0000_0100, A_SRL};		//srl
			12'b000000_000011: temp = {12'b1101_0000_0100, A_SRA};		//sra
			
		//I-type	
			12'b001000_xxxxxx: temp = {12'b1001_0000_0000, A_ADD};		//addi
			12'b001001_xxxxxx: temp = {12'b1001_0000_0000, A_ADDU};		//addiu
			12'b001100_xxxxxx: temp = {12'b1001_0000_0000, A_AND};		//andi
			12'b001101_xxxxxx: temp = {12'b1001_0000_0000, A_OR};			//ori
			12'b001110_xxxxxx: temp = {12'b1001_0000_0000, A_XOR};		//xori
			12'b001010_xxxxxx: temp = {12'b1001_0000_0000, A_SLT};		//slti
			12'b001011_xxxxxx: temp = {12'b1001_0000_0000, A_SLTU};		//sltiu
			12'b001111_xxxxxx: temp = {12'b1001_0000_0000, A_LUI};		//lui
			12'b100011_xxxxxx: temp = {12'b1000_0000_0010, A_ADD};		//lw
			12'b101011_xxxxxx: temp = {12'b0010_0000_0000, A_ADD};		//sw
			12'b000101_xxxxxx: temp = {12'b0000_1000_0000, A_NOP};		//bne
			12'b000111_xxxxxx: temp = {12'b0000_0001_0000, A_NOP};		//bgtz
			12'b100001_xxxxxx: begin  temp = {12'b1000_0000_0010, A_ADD}; {lsb, lsh, lu} = 3'b010; end	//lh
			12'b100101_xxxxxx: begin  temp = {12'b1000_0000_0010, A_ADD}; {lsb, lsh, lu} = 3'b011;	end	//lhu
			12'b100000_xxxxxx: begin  temp = {12'b1000_0000_0010, A_ADD}; {lsb, lsh, lu} = 3'b100;	end	//lb
			12'b100100_xxxxxx: begin  temp = {12'b1000_0000_0010, A_ADD}; {lsb, lsh, lu} = 3'b101;	end	//lbu
			12'b101000_xxxxxx: begin  temp = {12'b0010_0000_0000, A_ADD}; {lsb, lsh, lu} = 3'b100;	end	//sb
			12'b101001_xxxxxx: begin  temp = {12'b0010_0000_0000, A_ADD}; {lsb, lsh, lu} = 3'b010;	end	//sh
			12'b000001_xxxxxx: begin  temp = {12'b0000_0001_0000, A_NOP}; bgez0 = 1; end						//bgez
			12'b000100_xxxxxx: begin  temp = {12'b0000_1000_0000, A_NOP}; beq0 = 1; end						//beq
			
		//J-type
			12'b000010_xxxxxx: temp = {12'b0000_0010_0000, A_NOP};		//j
			
		//other
			12'b000000_111111: temp = {12'b1101_0000_0100, A_DIV};		//div $t1,$t2,$t3	我自己定义的
			12'b000000_001101: 														//break
				begin
					temp = {12'b0000_0000_0000, A_NOP};							
					Break = 1;
				end
			
			
			
			default: temp = 0;
			
		endcase
		end
	end
end

endmodule
