#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Validate the input
    if (n < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
        return 1;
    }

    // Print even numbers from 2 to N
    printf("Even numbers from 2 to %d are:\n", n);
    int i = 2; // Start from 2
    while (i <= n) {
        printf("%d ", i);
        i += 2; // Increment by 2 to get the next even number
    }
    printf("\n");

    return 0;
}

