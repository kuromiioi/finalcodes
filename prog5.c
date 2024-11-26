#include <stdio.h>

int main() {
    int a, b, temp;

    // Input the values of a and b
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values using a third variable
    temp = a;  // Store the value of a in temp
    a = b;     // Assign the value of b to a
    b = temp;  // Assign the value of temp (original a) to b

    // Display values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
