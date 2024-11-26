#include <stdio.h>

// Function to calculate the sum of digits until it becomes a single digit
int single_digit_sum(int num) {
    int sum;
    
    while (num >= 10) { // Continue until num is a single digit
        sum = 0;
        while (num > 0) {
            sum += num % 10; // Add the last digit
            num /= 10;       // Remove the last digit
        }
        num = sum; // Update num to the sum of digits
    }
    
    return num;
}

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Make sure the number is non-negative
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }

    // Calculate and print the single-digit sum
    int result = single_digit_sum(n);
    printf("The single-digit sum of the digits is %d.\n", result);

    return 0;
}

