#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Store the absolute value of the number in case it's negative
    int temp = number;
    if (temp < 0) {
        temp = -temp;
    }

    // Compute the sum of the digits
    while (temp > 0) {
        digit = temp % 10; // Get the last digit
        sum += digit;     // Add the digit to the sum
        temp /= 10;       // Remove the last digit
    }

    // Print the result
    printf("The sum of the individual digits of %d is %d.\n", number, sum);

    return 0;
}

