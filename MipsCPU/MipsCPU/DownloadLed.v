`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:03:05 06/06/2018 
// Design Name: 
// Module Name:    DownloadLed 
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
module DownloadLed(
	input ssled, ol,
	input [2:0] causeout,
	output [7:0] led
    );
	 
reg [3:0] dc;

assign led = {ssled, ol, 2'b00, dc};

always @ (causeout)
begin
	case(causeout)
		1: dc = 4'b0001;
		2: dc = 4'b0010;
		3: dc = 4'b0100;
		4: dc = 4'b1000;
	endcase
end

endmodule
