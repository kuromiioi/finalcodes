#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    // Prompt the user to enter the number of terms
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Print the Fibonacci series
    printf("Fibonacci series:\n");
    if (n > 0) printf("%d ", a); // Print the first term
    if (n > 1) printf("%d ", b); // Print the second term
    
    for (i = 2; i < n; i++) {
        next = a + b;
        a = b;
        b = next;
        printf("%d ", next);
    }
    printf("\n");

    return 0;
}

