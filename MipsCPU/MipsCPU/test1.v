`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:55:03 05/31/2018
// Design Name:   top
// Module Name:   F:/LabProject/codlab/mipsCPU/mipsCPU/test1.v
// Project Name:  mipsCPU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg clk;
	reg rst;
	reg btn;
	
	// Outputs
	wire [2:0] Cause;
	wire [31:0] EPC;
	wire [31:0] testPC, testInstruction;
//	wire [31:0] test1, test2, test3, test4;

	// Instantiate the Unit Under Test (UUT)
	top uut (
		.clk(clk), 
		.rst(rst), 
		.singlestep_sw(0),
		.singlestep_btn(btn),
		.selhigh16bit(0), 
		.addr(0), 
		.causeout(Cause),
		.PCout(EPC),
		.testPC(testPC),
//		.test1(test1),
//		.test2(test2),
//		.test3(test3),
//		.test4(test4),
		.testInstruction(testInstruction)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        rst = 1;
		  #20;
		 rst = 0;
		 btn = 1;
		 #40; btn = 0; #40 btn = 1;
		 #40; btn = 0; #40 btn = 1;
		 #40; btn = 0; #40 btn = 1;
		 #40; btn = 0; #40 btn = 1;
		 #40; btn = 0; #40 btn = 1;
		// Add stimulus here

	end
      always #5 clk = ~clk;
endmodule

