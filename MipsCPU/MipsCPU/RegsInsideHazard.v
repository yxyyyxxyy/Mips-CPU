`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:29:29 05/31/2018 
// Design Name: 
// Module Name:    RegsInsideHazard 
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
module RegsInsideHazard(
	input [4:0] writeaddr, readaddr1, readaddr2,
	input [31:0] data,
	input we,
	output reg [31:0] outdata1, outdata2,
	output reg IA, IB
    );

always @ (*)
begin
	IA = 0;
	IB = 0;
	if(we)
	begin
		if(writeaddr == readaddr1) begin outdata1 = data; IA = 1; end
		if(writeaddr == readaddr2) begin outdata2 = data; IB = 1; end
	end
end

endmodule
