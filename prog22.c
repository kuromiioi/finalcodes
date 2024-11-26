#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    // Reading a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Calculating factorial using a loop
        for (i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Printing the result
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
