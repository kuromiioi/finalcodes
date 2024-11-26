#include <stdio.h>

int main() {
    int N;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    if (N < 2) {
        printf("Please enter at least two numbers.\n");
        return 1; // Exit if there are not enough numbers
    }

    int numbers[N]; // Array to hold the numbers
    int max = -2147483648; // Initialize max to the smallest integer
    int secondMax = -2147483648; // Initialize second max

    // Read N integers from the user
    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        
        // Update max and second max
        if (numbers[i] > max) {
            secondMax = max; // Update second max
            max = numbers[i]; // Update max
        } else if (numbers[i] > secondMax && numbers[i] < max) {
            secondMax = numbers[i]; // Update second max
        }
    }

    // Check if a second maximum was found
    if (secondMax == -2147483648) {
        printf("There is no second maximum number.\n");
    } else {
        printf("Maximum: %d\n", max);
        printf("Second Maximum: %d\n", secondMax);
    }

    return 0;
}
