`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:43:08 05/30/2018 
// Design Name: 
// Module Name:    lwBlockHazard 
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
module lwBlockHazard(
	input [4:0] Dst, Rt, Rs, Dst2,
	input wire BNE, JR, MR2, J, WB, MR, BGTZ,
	output reg Blk
    );

always @ (*)
begin
	Blk = 0;
	if(J == 0 || JR)
	begin
		if(BNE || JR || BGTZ)
		begin
			if(WB && (Dst == Rt || Dst == Rs) && Dst != 0) Blk = 1;
			if(MR2 && (Dst2 == Rt || Dst2 == Rs) && Dst2 != 0) Blk = 1;
		end
		else if(MR != 0 && (Dst == Rt || Dst == Rs) && Dst != 0) Blk = 1;
	end
end

endmodule
