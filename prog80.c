#include <stdio.h>

// Function to generate and print the first N Fibonacci numbers
void printFibonacci(int n) {
    int a = 0, b = 1, next, i;

    printf("The first %d Fibonacci numbers are:\n", n);

    for (i = 0; i < n; i++) {
        if (i == 0) {
            next = a; // First Fibonacci number
        } else if (i == 1) {
            next = b; // Second Fibonacci number
        } else {
            next = a + b; // Next number is the sum of the previous two
            a = b; // Update a to the last number
            b = next; // Update b to the current number
        }
        printf("%d ", next); // Print the current Fibonacci number
    }
    printf("\n");
}

int main() {
    // Test the function for N = 5, 10, and 15
    printFibonacci(5);
    printFibonacci(10);
    printFibonacci(15);

    return 0;
}
