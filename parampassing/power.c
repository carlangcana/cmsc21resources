#include <stdio.h>

void computePower(double base, int exponent, double *result) {
    if (exponent == 0) {
        *result = 1.0;
    } else if (exponent > 0) {
        computePower(base, exponent - 1, result);
        *result *= base;
    } else {
        computePower(base, exponent + 1, result);
        *result /= base;
    }
}

int main() {
    double base, result;
    int exponent;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    computePower(base, exponent, &result);

    printf("Result: %.2lf\n", result);

    return 0;
}
