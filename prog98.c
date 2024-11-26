#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int r1, c1, r2, c2, i, j, k;

    // Input dimensions for matrices
    printf("Enter rows and columns of matrix 1: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n");
        return 1;
    }

    // Allocate memory for matrices dynamically
    int **mat1 = (int **)malloc(r1 * sizeof(int *));
    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    int **product = (int **)malloc(r1 * sizeof(int *));

    for (i = 0; i < r1; i++)
        mat1[i] = (int *)malloc(c1 * sizeof(int));

    for (i = 0; i < r2; i++)
        mat2[i] = (int *)malloc(c2 * sizeof(int));

    for (i = 0; i < r1; i++)
        product[i] = (int *)malloc(c2 * sizeof(int));

    // Input elements of matrix 1
    printf("Enter elements of matrix 1 (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input elements of matrix 2
    printf("Enter elements of matrix 2 (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Initialize product matrix to zero
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                product[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the product matrix
    printf("Product of the matrices (%d x %d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (i = 0; i < r1; i++)
        free(mat1[i]);
    for (i = 0; i < r2; i++)
        free(mat2[i]);
    for (i = 0; i < r1; i++)
        free(product[i]);

    free(mat1);
    free(mat2);
    free(product);

    return 0;
}
