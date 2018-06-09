`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:18:34 05/31/2018 
// Design Name: 
// Module Name:    EXControl 
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
module EXControl(
	input CF, Break, divzero, singlestep,
	input [31:0] PCadd4, PCadd41, PCadd42, PCadd43,
	output reg we, ss,
	output reg [31:0] PC,
	output reg [2:0] cause
    );

always @ (*)
begin
	ss = 0;
	casex({CF, Break, divzero, singlestep})
		4'b1000: 
			begin
				we = 1'b1;
				PC = PCadd42;
				cause = 3'd1;
			end
			
		4'b0100: 
			begin
				we = 1'b1;
				PC = PCadd41;
				cause = 3'd2;
			end
		
		4'b1010: 
			begin
				we = 1'b1;
				PC = PCadd42;
				cause = 3'd3;
			end
			
		4'bxxx1: 
			begin
				we = PCadd4 < 400? 1'b1: 1'b0;
				ss = we;
				PC = PCadd4;
				cause = 3'd4;
			end
			
		default: we = 1'b0;
	endcase
end

endmodule
