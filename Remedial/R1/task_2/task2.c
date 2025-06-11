#include <stdio.h>

// Define 32-bit signed integer limits manually using macros
// We can also use short etc types for this purpose but integer 
// was mentioned and it is 32-bits in C so i am using the maximun 2^31 - 1 
// and minimun -2^31 

#define MAX 2147483647
#define MIN (-2147483648)

int main() {
    int max = MAX;
    int min = MIN;

    // Integer Overflow: addition
    int overflow_result = max + 1;
    printf("MAX = %d\n", max);
    printf("After Overflow: %d + 1 = %d\n\n", max, overflow_result);

    // Integer Underflow: subtraction
    int underflow_result = min - 1;
    printf("MIN = %d\n", min);
    printf("After Underflow: %d - 1 = %d\n\n", min, underflow_result);

    // Integer overflow: multiplication
    int a;
    int b;
    a = 50000;
    b = 60000;
    printf("Multiplying %d by %d causes overflow\n", a, b);
    printf("After overflow: %d \n", a*b);

    return 0;
}
