#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double exponential(double z) {
    double x = fabs(z); // Absolute value of z
    double sum_items = 0.0;
    int n = 0;
    double precision = 10e-10;
    double x_by_n = 1.0;
    double fac_n = 1.0;
    double abs_x_by_n = 1.0;

    while (abs_x_by_n > precision) {
        sum_items += x_by_n;
        n++;
        fac_n *= n; // Compute factorial incrementally
        x_by_n = pow(x, n) / fac_n; // Next term in series
        abs_x_by_n = fabs(x_by_n);
    }

    if (z > 0) {
        return sum_items;
    } else {
        return 1.0 / sum_items;
    }
}

int main() {
    double x = 65.0;
    printf("%e\n", exponential(x));
    return 0;
}