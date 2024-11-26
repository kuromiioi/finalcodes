#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;

    // Handle edge cases
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    // Check for factors from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num is divisible by i, so it's not prime
        }
    }
    return 1; // num is prime
}

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime and display the result
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
