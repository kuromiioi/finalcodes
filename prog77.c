#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int number) {
    int originalNumber = number; // Store the original number
    int reversedNumber = 0; // Variable to store the reversed number

    // Reverse the number
    while (number > 0) {
        int digit = number % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        number /= 10; // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    return originalNumber == reversedNumber;
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}
