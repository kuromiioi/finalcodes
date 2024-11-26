#include <stdio.h>

int main() {
    float marks[5];
    float total = 0;
    float percentage;
    
    // Input marks for five subjects
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        total += marks[i];  // Sum up all the marks
    }
    
    // Calculate percentage
    percentage = (total / 500) * 100;  // Assuming each subject is out of 100 marks
    
    // Determine division based on percentage
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 50) {
        printf("Division: Second\n");
    } else if (percentage >= 40) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }

    return 0;
}
