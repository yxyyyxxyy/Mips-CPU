`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:07:34 06/07/2018 
// Design Name: 
// Module Name:    getOneSecClk 
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
module getOneSecClk(
	input clk, rst,
	output reg myClk
 );

parameter CLOCKNUM = 12500000;
	integer i;

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
