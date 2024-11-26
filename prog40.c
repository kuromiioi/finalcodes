#include <stdio.h>

int main() {
    int number;
    int sum = 0;

    printf("Enter numbers to sum (enter a negative number to stop):\n");

    // Read numbers until a negative number is entered
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number < 0) {
            break; // Exit the loop if the number is negative
        }

        sum += number; // Add the number to the sum
    }

    printf("Sum of the numbers entered: %d\n", sum);

    return 0;
}

