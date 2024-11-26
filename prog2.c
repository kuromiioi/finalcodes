#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, percentage;
    int i;

    // Input marks for five subjects
    for(i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];  // Adding each mark to total
    }

    // Calculate percentage
    percentage = (total / 500) * 100;

    // Display the total and percentage
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
