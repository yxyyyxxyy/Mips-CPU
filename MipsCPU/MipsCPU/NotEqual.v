`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:56 05/30/2018 
// Design Name: 
// Module Name:    NotEqual 
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
module NotEqual(
	input [31:0] data1, data2,
	input beq0,
	output noteq
    );

wire temp;
assign temp = (data1 != data2) ? 1'b1 : 1'b0;
assign noteq = beq0 ? ~temp : temp;

endmodule
