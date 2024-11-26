#include <stdio.h>

int main() {
    float basicsalary, hra, da, grosssalary;

    // Input basic salary
    printf("Enter the basic salary: ");
    scanf("%f", &basicsalary);

    // Calculate HRA and DA (assuming HRA is 20% and DA is 80% of basic salary)
    hra = basicsalary * 0.20;  // 20% of basic salary
    da = basicsalary * 0.80;   // 80% of basic salary

    // Calculate gross salary
    grosssalary = basicsalary + hra + da;

    // Display the gross salary
    printf("Gross Salary: %.2f\n", grosssalary);

    return 0;
}
