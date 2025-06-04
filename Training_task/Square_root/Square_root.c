#include <stdio.h>

double sqrt(double n) {
    if (n < 0)
        return -1; 

    double low = 0, high;
    high = (n >= 1.0) ? n : 1.0;
    double mid;
    double precision = 1e-6;

    while ((high - low) > precision) {
        mid = (low + high) / 2.0;
        if (mid * mid > n)
            high = mid;
        else
            low = mid;
    }

    return (low + high) / 2.0;
}

int main() {
    double number = 8;
    double result = sqrt(number);
    printf("Square root of %.6f is %.6f\n", number, result);
    return 0;
}