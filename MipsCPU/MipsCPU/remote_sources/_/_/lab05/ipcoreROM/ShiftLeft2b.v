`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:48:14 04/25/2018 
// Design Name: 
// Module Name:    ShiftLeft2b 
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
module ShiftLeft2b25(
	input [25:0] indata,
	output [27:0] outdata
    );

assign outdata = {indata, 2'd0};

endmodule
