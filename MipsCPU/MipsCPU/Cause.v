`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:36:15 05/31/2018 
// Design Name: 
// Module Name:    Cause 
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
module Cause(
	input clk, rst, we,
	input [2:0] causein,
	output reg [2:0] causeout
    );

always @ (posedge clk or posedge rst)
begin
	if(rst) causeout <= 0;
	else
	begin
		if(we) causeout <= causein;
	end
end

endmodule
