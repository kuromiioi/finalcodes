#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Reading a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;              // Extracting the last digit
        reversedNum = reversedNum * 10 + remainder;  // Adding the digit to the reversed number
        num /= 10;                         // Removing the last digit from the original number
    }

    // Printing the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
