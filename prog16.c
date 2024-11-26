#include <stdio.h>

int main() {
    int num1, num2, num3, max;

    // Reading three numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Finding the maximum number using if-else
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        max = num2;
    } else {
        max = num3;
    }

    // Printing the maximum number
    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}
