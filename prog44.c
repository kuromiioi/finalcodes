#include <stdio.h>

int main() {
    double units, amount;

    // Input electricity consumption in units
    printf("Enter electricity consumption (in units): ");
    scanf("%lf", &units);

    // Calculate the amount based on consumption
    if (units <= 200) {
        amount = units * 0.50; // Rate is Re 0.50 per unit
    } else if (units <= 400) {
        amount = 100 + (units - 200) * 0.65; // Rs 100 plus Re 0.65 per unit above 200
    } else if (units <= 600) {
        amount = 230 + (units - 400) * 0.80; // Rs 230 plus Re 0.80 per unit above 400
    } else {
        amount = 425 + (units - 600) * 125; // Rs 425 plus Rs 125 per unit above 600
    }

    // Display the amount to be paid
    printf("Amount to be paid: Rs. %.2f\n", amount);

    return 0;
}

