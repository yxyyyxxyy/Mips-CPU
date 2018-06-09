`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:10:12 04/25/2018 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input signed [31:0] alu_a,
	input signed [31:0] alu_b,
	input [4:0] sh,
	input [4:0] alu_op,
	output reg [31:0] alu_out,
	output overflow,
	output reg divzero
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

	 
 	 wire [31:0] ua, ub;
	 assign ua = alu_a, ub = alu_b;
 	 
	 overflowtest ALUoverflowtest (
    .result(alu_out), 
    .a(alu_a), 
    .b(alu_b), 
    .op(alu_op), 
    .overflow(overflow),
	 .mb(-b)
    );

	 
	 always @ (*)
	 begin
		divzero = 0;
		case(alu_op)
			A_NOP: alu_out = {32{1'b0}};		//ø’‘ÀÀ„
			A_ADD: alu_out = alu_a + alu_b;
			A_SUB: alu_out = alu_a - alu_b;
			A_AND: alu_out = alu_a & alu_b;
			A_OR:  alu_out = alu_a | alu_b;
			A_XOR: alu_out = alu_a ^ alu_b;
			A_NOR: alu_out = ~(alu_a | alu_b);
			A_ADDU: alu_out = ua + ub;
			A_SUBU: alu_out = ua - ub;
			A_SLT: alu_out = alu_a < alu_b ? 1 : 0;
			A_SLTU: alu_out = ua < ub ? 1 : 0;
			A_MUL: alu_out = alu_a * alu_b;
			A_MULU: alu_out = ua * ub;
			A_DIV: 
				begin
					if(alu_b == 0) divzero = 1;
					//else alu_out = alu_a / alu_b;		//Can not simplify operator DIV.
				end
			A_LUI: alu_out = {alu_b[15:0], 16'd0};
			default: alu_out = {32{1'b0}};
			
			A_SLL: alu_out = alu_b << sh;
			A_SRL: alu_out = alu_b >> sh;
			A_SRA: alu_out = alu_b >>> sh;
			
		endcase
	 end


endmodule