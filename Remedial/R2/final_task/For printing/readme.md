# Run with these commands:

riscv64-unknown-elf-gcc -o factorial.elf factorial.S


spike -d $PK  factorial.elf 


where $PK is simply the path to where your pk in installed

After you do this , you will be able to see "Factorial is 120" on terminal
