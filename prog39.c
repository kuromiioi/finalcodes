#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int num) {
    int fact = 1;
    int i;
    for (i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    int i;
    double sum = 0.0;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    // Validate the input
    if (n < 1) {
        printf("Please enter a positive integer greater than or equal to 1.\n");
        return 1;
    }

    // Print and calculate the series
    printf("Series:\n");
    for (i = 1; i <= n; i++) {
        double term = (double)i / factorial(i);
        sum += term;
        printf("%d/%d! ", i, i);
        if (i < n) {
            printf("+ ");
        }
    }
    printf("\nSum of the series: %.6f\n", sum);

    return 0;
}

