#include <stdio.h>

int main() {
    int numbers[10]; // Array to hold 10 integers
    int sum = 0;     // Variable to store the sum

    // Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Add the current number to the sum
    }

    // Print the sum of the numbers
    printf("Sum of the numbers: %d\n", sum);

    return 0;
}
