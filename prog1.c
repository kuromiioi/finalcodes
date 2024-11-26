#include <stdio.h>

int main() {
    float principal, rate, time, interest;

    // Input values
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display the result
    printf("Simple Interest: %.2f\n", interest);

    return 0;
}
