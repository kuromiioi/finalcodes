#include <stdio.h>

int main() {
    int n, i;
    int even_sum = 0, odd_sum = 0;

    // Reading the value of N from the user
    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Loop to calculate the sum of even and odd numbers between 1 and N
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            even_sum += i; // Add to even sum if the number is even
        } else {
            odd_sum += i;  // Add to odd sum if the number is odd
        }
    }

    // Printing the results
    printf("Sum of all even numbers between 1 and %d = %d\n", n, even_sum);
    printf("Sum of all odd numbers between 1 and %d = %d\n", n, odd_sum);

    return 0;
}
