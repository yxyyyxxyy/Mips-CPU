`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:15 11/23/2017 
// Design Name: 
// Module Name:    seg 
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
module seg(
	input clk,rst_n,
	input [15:0] data_in,
	output reg [3:0] sel,
	output reg [6:0] data
    );
	
	wire rst;
	assign rst = ~rst_n;
	integer cur_state,next_state;
	reg [3:0] num;
	
	getMyClk genMyClk(	//产生1ms的时钟，测试时改为3
		.clk(clk),
		.rst(rst),
		.myClk(myClk2)
	);
	
	always @ (num)
	begin
		case(num)
			4'd0:data=7'b0000001;
			4'd1:data=7'b1001111;
			4'd2:data=7'b0010010;
			4'd3:data=7'b0000110;
			4'd4:data=7'b1001100;
			4'd5:data=7'b0100100;
			4'd6:data=7'b0100000;
			4'd7:data=7'b0001111;
			4'd8:data=7'b0000000;
			4'd9:data=7'b0000100;
			4'd10:data=7'b0001000;
			4'd11:data=7'b1100000;
			4'd12:data=7'b0110001;
			4'd13:data=7'b1000010;
			4'd14:data=7'b0110000;
			4'd15:data=7'b0111000;
		endcase
	end
		
	always @ (posedge myClk2,negedge rst_n)
	begin
		if(rst_n == 0)cur_state <= 0;
		else cur_state <= next_state;
	end

	always @ (cur_state)
	begin
		case(cur_state)
			  0:begin
					next_state = 1;
					sel = 4'b1110;
					num = data_in[3:0];
			  end
			  1:begin
					next_state = 2;
					sel = 4'b1101;
					num = data_in[7:4];
			  end
			  2:begin
					next_state = 3;
					sel = 4'b1011;
					num = data_in[11:8];
			  end
			  3:begin
					next_state = 0;
					sel = 4'b0111;
					num = data_in[15:12];
			  end
		endcase
	end

endmodule
