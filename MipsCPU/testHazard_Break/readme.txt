 .data
data_in: .word 1 2 3
data_out: .word 0 0 0
      .text
      la   $t0, data_in
      lw   $t1, 0($t0)		#$t1=1
      lw   $t2, 4($t0)		#$t2=2
      lw   $t3, 8($t0)		#$t3=3

# R + R
      add  $t1, $t2, $t3	#$t1=5
      add  $t2, $t1, $t3	#$t2=8
      add  $t3, $t1, $t2	#$t3=13

      la   $t0, data_out
      sw   $t1, 0($t0)		#5
      sw   $t2, 4($t0)		#8
      sw   $t3, 8($t0)		#13
   
#lw + branch
      lw   $t4, 4($t0)		#$t4=8
      bgtz $t4, next
loop: beq  $0, $0, loop		#it should not stop here
  
#lw + sw    
next: lw   $t4, 4($t0)		#$t4=8
      sw   $t4, 16($t4)		#save 8 to 24  
     
#lw + R   
      lw   $t4, 4($t0)		#$t4=8
      addi $t4, $t4, 1		#$t4=9
      ori  $t5, $t4, 0		#$t5=$t4=9
            
#R + branch / branch + branch     
n1:   beq  $t5, $t4, n3
n2:   nor  $t5, $t5, $zero
n3:   bgez $t5, n2

break

(100)
out:  
	j out



#结果应该是 1 2 3 5 8 13 8
Cause = 2
EPC = 100
PC停在400 404