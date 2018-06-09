`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:18:27 05/30/2018 
// Design Name: 
// Module Name:    SDFF 
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
module SDFF(
input clk, flush, rst,
input [31:0] indata,
input we,
output reg [31:0] outdata
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