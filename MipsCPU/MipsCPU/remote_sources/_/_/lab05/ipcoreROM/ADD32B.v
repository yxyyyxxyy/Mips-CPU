`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:14:43 04/26/2018 
// Design Name: 
// Module Name:    ADD32B 
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
module ADD32B(
	input signed [31:0] datain1, datain2,
	output [31:0] outdata
    );

assign outdata = datain1 + datain2;

endmodule
