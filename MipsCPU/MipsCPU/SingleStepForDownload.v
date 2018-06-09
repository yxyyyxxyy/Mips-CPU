`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:04:04 06/05/2018 
// Design Name: 
// Module Name:    SingleStepForDownload 
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
module SingleStepForDownload(
	input btn, rst, singlestep, clk,
	output singleStepSel, ol
    );

wire op;

getPosedge getPosedge (
    .in(btn), 
    .clk(clk), 
    .op(op),.ol(ol),
	 .rst(rst)
    );
	 
assign singleStepSel = singlestep & op;

endmodule
