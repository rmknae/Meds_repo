.data
b: .space 12   # 3 * 4 bytes for 3 integers

msg2: .asciiz "Printing b[2]: "
msg1: .asciiz "Printing b[1]: "
msg0: .asciiz "Printing b[0]: "

.text
main:
    add s0, x0, x0      # i = 0
    addi s1, x0, 7      # a = 7
    la s2, b            # s2 = address of array b
    addi t0, x0, 3      # loop limit (i < 3)

loop:
    bge s0, t0, end     # if i >= 3, exit loop

    mul t1, s0, s1      # t1 = i * a
    add t1, t1, s1      # t1 = a + (i * a)
    li  t3, 4           # 4 bytes per word
    mul t4, s0, t3      # t4 = i * 4 (byte offset)
    add t4,t4,s2
    sw  t1, 0(t4)  # store t1 to b[i]

    addi s0, s0, 1      # i++
    jal x0, loop        # jump to loop


end:
##Printing index 2 of b
    la a1, msg2    
    addi a0, x0, 4
    ecall
   

    lw a1, 8(s2)     # load b[2] into a0
    addi a0, x0, 1
    ecall

    addi a1, x0, '\n'   # Load in ascii code for newline
    addi a0, x0, 11
    ecall

##Printing index 1 of b
    la a1, msg1    # load b[2] into a0
    addi a0, x0, 4
    ecall

    lw a1, 4(s2)     # load b[1] into a0
    addi a0, x0, 1
    ecall

    addi a1, x0, '\n'   # Load in ascii code for newline
    addi a0, x0, 11
    ecall
    
##Printing index 0 of b

    la a1, msg0   # load b[2] into a0
    addi a0, x0, 4
    ecall

    lw a1, 0(s2)     # load b[0] into a0
    addi a0, x0, 1
    ecall

    
    addi a1, x0, '\n'   # Load in ascii code for newline
    addi a0, x0, 11
    ecall