`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:01 11/16/2017 
// Design Name: 
// Module Name:    getPosedge 
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
module getPosedge(
	input in,
	input clk, rst,
	output ol, op
    );
	 
	 wire out, out1;
	 assign op = ol & (~out);

	removeShaking myRemoveShaking(
		.in(in),
		.rst(rst),
		.clk(clk),
		.ol(ol)
	);
	
	SDFF1 SSDFF1 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(ol), 
    .we(1'b1), 
    .outdata(out1)
    );
	 
	 SDFF1 SSDFF2 (
    .clk(clk), 
    .flush(1'b0), 
    .rst(rst), 
    .indata(out1), 
    .we(1'b1), 
    .outdata(out)
    );

	
endmodule
