#include <stdio.h>

int main() {
    int num, i, isPrime = 1;  // isPrime is used as a flag

    // Reading a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else {
        // Check divisibility from 2 to sqrt(num) or num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible by any number other than 1 and itself
                break;
            }
        }
    }

    // Printing the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
