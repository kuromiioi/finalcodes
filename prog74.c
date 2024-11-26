#include <stdio.h>

int main() {
    int A[100], B[100], C[200]; // Arrays A, B, and C
    int nA, nB; // Sizes of arrays A and B
    int i = 0, j = 0, k = 0; // Indices for A, B, and C

    // Input size and elements of array A
    printf("Enter the number of elements in array A: ");
    scanf("%d", &nA);
    printf("Enter %d sorted elements of array A:\n", nA);
    for (i = 0; i < nA; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &A[i]);
    }

    // Input size and elements of array B
    printf("Enter the number of elements in array B: ");
    scanf("%d", &nB);
    printf("Enter %d sorted elements of array B:\n", nB);
    for (i = 0; i < nB; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &B[i]);
    }

    // Merge arrays A and B into array C
    i = 0; // Reset index for A
    j = 0; // Reset index for B
    while (i < nA && j < nB) {
        if (A[i] < B[j]) {
            C[k++] = A[i++]; // Add A[i] to C and increment indices
        } else {
            C[k++] = B[j++]; // Add B[j] to C and increment indices
        }
    }

    // Add remaining elements of A (if any)
    while (i < nA) {
        C[k++] = A[i++];
    }

    // Add remaining elements of B (if any)
    while (j < nB) {
        C[k++] = B[j++];
    }

    // Output the merged sorted array C
    printf("\nMerged sorted array C:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
