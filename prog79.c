#include <stdio.h>

// Function to exchange the values of two variables
void exchange(int *x, int *y) {
    int temp; // Temporary variable for swapping
    temp = *x; // Store the value of x in temp
    *x = *y;   // Assign the value of y to x
    *y = temp; // Assign the value of temp to y
}

int main() {
    int x, y;

    // Input values for x and y
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

    // Display values before exchange
    printf("\nBefore exchange: x = %d, y = %d\n", x, y);

    // Call the exchange function
    exchange(&x, &y);

    // Display values after exchange
    printf("After exchange: x = %d, y = %d\n", x, y);

    return 0;
}
