# Run with these commands:

riscv64-unknown-elf-gcc -o factorial.elf factorial.S


riscv64-unknown-elf-ld -T linker.ld -o factorial.elf factorial.o


where $PK is simply the path to where your pk in installed
