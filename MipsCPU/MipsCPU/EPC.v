`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:44:12 05/31/2018 
// Design Name: 
// Module Name:    EPC 
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
module EPC(
	input clk, rst, we,
	input [31:0] PCin,
	output reg [31:0] PCout
    );

always @ (posedge clk or posedge rst)
begin
	if(rst) PCout <= 0;
	else
	begin
		if(we) PCout <= PCin;
	end
end

endmodule
