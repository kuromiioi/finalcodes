#include <stdio.h>

int main() {
    int numbers[10]; // Array to hold 10 integers
    int oddCount = 0; // Variable to count odd numbers

    // Read 10 integers from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        
        // Check if the number is odd
        if (numbers[i] % 2 != 0) {
            oddCount++; // Increment odd count if the number is odd
        }
    }

    // Print each element and its count
    printf("\nElements in the array and their counts:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element: %d\n", numbers[i]);
    }

    // Print the total count of odd numbers
    printf("\nTotal number of odd numbers: %d\n", oddCount);

    return 0;
}
