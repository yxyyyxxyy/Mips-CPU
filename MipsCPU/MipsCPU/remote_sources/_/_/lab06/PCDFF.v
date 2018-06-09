`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:42:26 05/02/2018 
// Design Name: 
// Module Name:    PCDFF 
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
module PCDFF(
input clk,rst_n,
input [31:0] indata,
input we,
output reg [31:0] outdata
    );

always @ (posedge clk or negedge rst_n)
begin
	if(~rst_n)outdata <= 0;
	else if(we)outdata <= indata;
	else outdata <= outdata;
end

endmodule
