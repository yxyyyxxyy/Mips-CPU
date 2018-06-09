`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:48 05/02/2018 
// Design Name: 
// Module Name:    MUX32_4_1 
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
module MUX32_4_1(
	input [31:0] data00, data01, data10, data11,
	input [1:0] sel,
	output reg [31:0] dataout
    );

always @ (*)
begin
	case(sel)
		2'b00: dataout = data00;
		2'b01: dataout = data01;
		2'b10: dataout = data10;
		2'b11: dataout = data11;
	endcase
end

endmodule
