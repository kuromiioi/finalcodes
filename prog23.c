#include <stdio.h>

int main() {
    int base, exponent;
    double result = 1.0;  // To store the result

    // Reading base and exponent from the user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // If exponent is positive, multiply base exponent times
    if (exponent > 0) {
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
    }
    // If exponent is negative, calculate reciprocal
    else if (exponent < 0) {
        for (int i = 1; i <= -exponent; i++) {
            result *= base;
        }
        result = 1.0 / result;
    }
    // If exponent is zero, result is 1 for any base
    else {
        result = 1;
    }

    // Printing the result
    printf("%d raised to the power of %d = %lf\n", base, exponent, result);

    return 0;
}
