`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:46:54 04/25/2018 
// Design Name: 
// Module Name:    SEXT16_32 
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
module SEXT16_32(
	input signed [15:0] indata,
	output [31:0] outdata
    );

assign outdata = indata;

endmodule
