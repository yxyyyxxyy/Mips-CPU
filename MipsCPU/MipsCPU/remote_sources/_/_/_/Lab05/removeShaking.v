`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:31:18 11/16/2017 
// Design Name: 
// Module Name:    removeShaking 
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
module removeShaking(
	input in,
	input clk, rst,
	output reg ol
    );
	 
	parameter CLOCKNUM = 50000;		//10ms/(1s/50M)
	
	reg [31:0] num;
	
	always @ (posedge clk)
		if(ol != in) num <= num + 1;
		else num <= 0;
	
	always @ (*)
		if(rst) ol = 0;
		else ol = (num > CLOCKNUM ? in : ol);
endmodule
