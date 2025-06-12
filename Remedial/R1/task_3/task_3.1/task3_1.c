#include <stdio.h>

int main() {
    int x, y, result;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    __asm__ volatile (
        "movl %1, %%eax;"  
        "addl %2, %%eax;"    
        "movl %%eax, %0;"  
        : "=r" (result)     
        : "r" (x), "r" (y)   
        : "%eax"             
    );

    printf("Result (x + y): %d\n", result);

    return 0;
}
