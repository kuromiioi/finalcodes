#include <stdio.h>

int main() {
    int n;
    int i;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Validate the input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print factors of N
    printf("Factors of %d are:\n", n);

    // Use a separate variable for iteration
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

