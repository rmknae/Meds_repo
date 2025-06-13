#include <stdio.h>

// Function to print binary representation
void printBinary(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
}


// Count trailing zeros in binary (bitwise method)
int count_trailing_zeros_binary(unsigned int n) {
    if (n == 0) return 32;
    int count = 0;
    while ((n & 1) == 0) {
        count++;
        n >>= 1;
    }
    return count;
}

// Count trailing zeros in decimal
int count_trailing_decimal_zeros(unsigned int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n % 10 == 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    unsigned int num;

    printf("Enter any number: ");
    scanf("%u", &num);

    printf("Binary Representation: ");
    printBinary(num);
    printf("\n");

    int binZeros = count_trailing_zeros_binary(num);
    int decZeros = count_trailing_decimal_zeros(num);

    printf("Trailing zeros in BINARY : %d\n", binZeros);
    printf("Trailing zeros in DECIMAL: %d\n", decZeros);

    return 0;
}
