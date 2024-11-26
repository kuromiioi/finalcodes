#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOdd(int number) {
    if (number % 2 == 0) {
        printf("%d is an even number.\n", number);
    } else {
        printf("%d is an odd number.\n", number);
    }
}

int main() {
    int num;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function to check if the number is even or odd
    checkEvenOdd(num);

    return 0;
}
