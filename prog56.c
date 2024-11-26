#include <stdio.h>

int main() {
    int numbers[10]; // Array to hold 10 integers
    int positiveCount = 0; // Variable to count positive numbers
    int negativeCount = 0; // Variable to count negative numbers
    int zeroCount = 0; // Variable to count zeros

    // Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        
        // Count positive, negative, and zero elements
        if (numbers[i] > 0) {
            positiveCount++;
        } else if (numbers[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    // Print the counts
    printf("\nTotal number of positive numbers: %d\n", positiveCount);
    printf("Total number of negative numbers: %d\n", negativeCount);
    printf("Total number of zeros: %d\n", zeroCount);

    return 0;
}
