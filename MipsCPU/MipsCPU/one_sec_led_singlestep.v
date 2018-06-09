`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:26:34 06/06/2018 
// Design Name: 
// Module Name:    one_sec_led_singlestep 
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
module SingleStepLedForDownload(
	input myClk, rst,
	output op
    );


integer count;
assign op = !count;

always @ (posedge myClk or posedge rst)
begin
	if(rst) count <= 0;
	else 
	begin
	if(count < 3) count <= count + 1;
	else count <= count;
	end
end

endmodule