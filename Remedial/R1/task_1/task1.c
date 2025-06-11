#include <stdio.h>

// Function declarations
int binary_converter(int a);
void printBinary(short num);

// main function
int main() {
    int number;

    // prompting user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // inverting the number
    int inverted_number = binary_converter(number);

    // adding 1
    short complement_num = inverted_number + 1;
    

    // printing
    printf("Binary representation of %d is  ", number);
    printBinary(number);
    printf("\n");
    printf("2's complement of %d is ", number);
    printBinary(complement_num);
    printf("\n");

    return 0;
}

// Function to invert all bits
int binary_converter(int a) {
    return ~a;
}

// Print 16-bit binary
void printBinary(short num) {
    for (int i = 15; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}
