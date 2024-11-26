#include <stdio.h>

// Define a macro to find the largest of two numbers
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2;

    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Use the macro to find and print the largest number
    printf("The largest number is: %d\n", MAX(num1, num2));

    return 0;
}
