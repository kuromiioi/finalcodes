#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int sum;

    // Input elements of the matrix
    printf("Enter the elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate and print the sum of each row
    printf("Sum of each row:\n");
    for (i = 0; i < 3; i++) {
        sum = 0; // Reset sum for each row
        for (j = 0; j < 3; j++) {
            sum += matrix[i][j]; // Add each element of the row
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }

    return 0;
}
