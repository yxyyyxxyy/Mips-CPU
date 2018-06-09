`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:48:01 11/23/2017 
// Design Name: 
// Module Name:    getMyClk 
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
module getMyClk(
	input clk, rst,
	output reg myClk
 );


	integer i;
	parameter CLOCKNUM = 125000;

	always @ (posedge clk or posedge rst)
	begin
		if(rst) begin i = 0; myClk = 0; end
		else
		begin
		i = i + 1;
		if(i >= CLOCKNUM)
		begin
			i = 0;
			myClk = ~myClk;
		end
		end
	end

endmodule
