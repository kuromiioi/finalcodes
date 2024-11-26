#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int number) {
    int originalNumber = number;
    int sum = 0;
    int digits = 0;

    // Calculate the number of digits
    while (originalNumber != 0) {
        originalNumber /= 10;
        digits++;
    }

    originalNumber = number; // Reset original number for the next loop

    // Calculate the sum of digits raised to the power of the number of digits
    while (originalNumber != 0) {
        int digit = originalNumber % 10; // Get the last digit
        sum += pow(digit, digits); // Add the digit raised to the power of the number of digits
        originalNumber /= 10; // Remove the last digit
    }

    // Check if the sum is equal to the original number
    return sum == number;
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is an Armstrong number
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
