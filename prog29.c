#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Reading a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Storing the original number

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;             // Extracting the last digit
        reversedNum = reversedNum * 10 + remainder;  // Building the reversed number
        num /= 10;                        // Removing the last digit
    }

    // Checking if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}
