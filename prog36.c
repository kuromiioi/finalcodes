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

    // Print odd numbers from 1 to N
    printf("Odd numbers from 1 to %d are:\n", n);
    int i;
    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}


