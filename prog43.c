#include <stdio.h>

int main() {
    double sales, commission;

    // Input sales amount
    printf("Enter sales amount: ");
    scanf("%lf", &sales);

    // Calculate commission based on sales amount
    if (sales <= 500) {
        commission = sales * 0.05; // 5%
    } else if (sales <= 2000) {
        commission = 35 + (sales - 500) * 0.10; // Rs. 35 + 10% above Rs. 500
    } else if (sales <= 5000) {
        commission = 185 + (sales - 2000) * 0.12; // Rs. 185 + 12% above Rs. 2000
    } else {
        commission = sales * 0.125; // 12.5%
    }

    // Display the commission
    printf("Commission: Rs. %.2f\n", commission);

    return 0;
}

