`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:15:29 06/06/2018 
// Design Name: 
// Module Name:    storebh 
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
module storebh(
	input [31:0] din, memin,
	input [1:0] offset,
	input lsb, lsh,
	output reg [31:0] dout
    );

always @ (*)
begin
	case({lsb, lsh})
		
		2'b01: 
			if(offset[1]) dout = {din[15:0], memin[15:0]};
			else dout = {memin[31:16], din[15:0]};	
	
		2'b10: 
			case(offset)
				2'b00: dout = {memin[31:8], din[7:0]};
				2'b01: dout = {memin[31:16], din[7:0], memin[7:0]};
				2'b10: dout = {memin[31:24], din[7:0], memin[15:0]};
				2'b11: dout = {din[7:0], memin[23:0]};
			endcase
	
		default: dout = din;
		
	endcase
end

endmodule
