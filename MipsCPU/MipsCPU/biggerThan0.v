`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:40:48 05/30/2018 
// Design Name: 
// Module Name:    biggerThan0 
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
module biggerThan0(
	input signed [31:0] data,
	input bgez0,
	output reg bigger
    );

always @ (*)
begin
	if(bgez0) bigger = (data >= 0 ? 1'b1: 1'b0);
	else bigger = (data > 0 ? 1'b1: 1'b0);
end

endmodule
