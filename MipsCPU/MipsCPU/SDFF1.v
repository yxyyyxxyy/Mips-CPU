`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:14:47 05/30/2018 
// Design Name: 
// Module Name:    SDFF1 
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
module SDFF1(
input clk, flush, rst,
input indata,
input we,
output reg outdata
    );
	 
wire fl;
assign fl = flush | rst;

always @ (posedge clk)
begin
	if(we) 
	begin
		if(fl)outdata <= 0;
		else outdata <= indata;
	end
	else outdata <= outdata;
end

endmodule
