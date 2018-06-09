`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:23 04/25/2018 
// Design Name: 
// Module Name:    REG_FILE 
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
module REG_FILE(
	input clk, rst_n,
	input [5:0] rAddra, rAddrb,
	output [31:0] rDouta, rDoutb,
	input [5:0] wAddr,
	input [31:0] wDin,
	input wEna
    );
	 //∂¡“Ï≤Ω£¨–¥Õ¨≤Ω

	reg [31:0] REGs [63:0];
	integer i;
	assign rDouta = REGs[rAddra];
	assign rDoutb = REGs[rAddrb];

	
	always @ (posedge clk or negedge rst_n)
	begin
		if(~rst_n)
		begin
			for(i = 0; i < 64; i = i + 1) REGs[i] = 0;
		end
		
		else
		begin
			if(wEna) REGs[wAddr] = wDin;	
		end
	end

endmodule
