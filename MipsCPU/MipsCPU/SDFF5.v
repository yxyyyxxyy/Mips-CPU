`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:48:49 05/30/2018 
// Design Name: 
// Module Name:    SDFF5 
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
module SDFF5(
input clk, flush, rst,
input [4:0] indata,
input we,
output reg [4:0] outdata
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
