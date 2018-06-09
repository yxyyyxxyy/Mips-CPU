`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:09:54 04/26/2018 
// Design Name: 
// Module Name:    ShiftLeft2b31 
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
module ShiftLeft2b31(
	input [31:0] datain,
	output [31:0] dataout
    );

assign dataout = {datain[29:0], 2'b00};

endmodule
