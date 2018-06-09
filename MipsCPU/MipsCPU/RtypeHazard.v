`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:28:26 05/30/2018 
// Design Name: 
// Module Name:    RtypeHazard 
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
module RtypeHazard(
	input [4:0] Rs, Rt, Rd1, Rd2, 
	input RW2, RW3,
	output reg [1:0] RA, RB
    );

always @ (*)
begin
	RA = 2'b00;
	RB = 2'b00;
	if(RW2 && Rd1 != 0 && Rd1 == Rs) RA = 2'b01;
	else if(RW3 && Rd2 != 0 && Rd2 == Rs) RA = 2'b10;
	if(RW2 && Rd1 != 0 && Rd1 == Rt) RB = 2'b01;
	else if(RW3 && Rd2 != 0 && Rd2 == Rt) RB = 2'b10;
end

endmodule
