#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int max, min;

    // Input elements of the matrix
    printf("Enter the elements of a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Initialize max and min with the first element
    max = min = matrix[0][0];

    // Traverse the matrix to find max and min
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j]; // Update max
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j]; // Update min
            }
        }
    }

    // Print the maximum and minimum elements
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
