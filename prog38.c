#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Validate the input
    if (n < 1) {
        printf("Please enter a number greater than or equal to 1.\n");
        return 1;
    }

    // Print squares of natural numbers until the square exceeds N
    printf("Squares of natural numbers up to %d are:\n", n);
    int i = 1; // Start with the first natural number
    while (i * i <= n) {
        printf("%d ", i * i);
        i++; // Move to the next natural number
    }
    printf("\n");

    return 0;
}

