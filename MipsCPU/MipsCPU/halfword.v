`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:19:56 06/06/2018 
// Design Name: 
// Module Name:    halfword 
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
module halfword(
	input [31:0] din,
	input [1:0] offset,
	input lsh, lsb, lu,
	output reg [31:0] dout
    );

wire [31:0] low, high;

SEXT16_32 SEXTLOW (
    .indata(din[15:0]), 
    .outdata(low)
    );
	 
SEXT16_32 SEXTHIGH (
    .indata(din[31:16]), 
    .outdata(high)
    );

always @ (*)
begin
		case({lsh, lsb, lu})
		
			3'b101: 
				if(offset[1]) dout = {16'b0, din[31:16]};
				else dout = {16'b0, din[15:0]};
				
			3'b100: 
				if(offset[1]) dout = high;
				else dout = low;
				
			3'b011: 
				case(offset)
					2'b00:  dout = {24'b0, din[7:0]};
					2'b01:  dout = {24'b0, din[15:8]};
					2'b10:  dout = {24'b0, din[23:16]};
					2'b11:  dout = {24'b0, din[31:24]};
				endcase
				
			3'b010: 
				case(offset)
					2'b00:  dout = din[7] ? {24'hffffff, din[7:0]} : {24'b0, din[7:0]};
					2'b01:  dout = din[15] ? {24'hffffff, din[15:8]} : {24'b0, din[15:8]};
					2'b10:  dout = din[23] ? {24'hffffff, din[23:16]} : {24'b0, din[23:16]};
					2'b11:  dout = din[31] ? {24'hffffff, din[31:24]} : {24'b0, din[31:24]};
				endcase
				
			default: dout = din;
			
		endcase
end

endmodule
