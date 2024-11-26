#include <stdio.h>

int main() {
    int a, b;

    // Input the values of a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values without using a third variable
    a = a + b;  // Step 1: a now contains the sum of a and b
    b = a - b;  // Step 2: b is now (a + b) - b, which is the original value of a
    a = a - b;  // Step 3: a is now (a + b) - a, which is the original value of b

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
