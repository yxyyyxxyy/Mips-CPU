`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:01:39 05/30/2018 
// Design Name: 
// Module Name:    EarlyBranchHazard 
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
module EarlyBranchHazard(
	input J, JR, BNE, BGTZ, RW2, RW3,
	input [4:0] Rs, Rt, Rd1, Rd2,
	output reg [1:0] DA, DB
    );

always @ (*)
begin
	DA = 2'b00;
	DB = 2'b00;
	if((J == 0 || JR) && (BNE || JR || BGTZ))
	begin
		if(RW2 && Rd1 != 0 && Rd1 == Rs) DA = 2'b01;
		else if(RW3 && Rd2 != 0 && Rd2 == Rs) DA = 2'b10;
		if(RW2 && Rd1 != 0 && Rd1 == Rt) DB = 2'b01;
		else if(RW3 && Rd2 != 0 && Rd2 == Rt) DB = 2'b10;
	end
end

endmodule
