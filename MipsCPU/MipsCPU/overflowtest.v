`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:12 05/31/2018 
// Design Name: 
// Module Name:    overflowtest 
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
module overflowtest(
	input signed [31:0] result, a, b, mb,
	input [4:0] op,
	output reg overflow
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

reg [31:0] temp;
//integer mtemp;

always @ (*)
begin

	overflow = 1'b0;
	
	 case(op)
	 
		A_ADD:
			begin
				if(result > 0 && a < 0 && b < 0 || result < 0 && a > 0 && b > 0) overflow = 1'b1;
			end
		
		A_SUB:
			begin
				if(result > 0 && a < 0 && mb < 0 || result < 0 && a > 0 && mb > 0) overflow = 1'b1;
			end
			
		A_ADDU:
			begin
				{overflow, temp} = a + b;
			end
			
		A_SUBU:
			begin
				{overflow, temp} = a + mb;
			end
			
//		A_MULU:
//			begin
//				mtemp = a * b;
//				overflow = |mtemp[63:32];
//			end
//			
//		A_MUL:
//			begin
//				mtemp = a * b;
//				overflow = |mtemp[63:32] && &(~mtemp[63:32]);
//			end
			
		default: overflow = 1'b0;
	 endcase

end
endmodule
