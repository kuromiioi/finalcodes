#include <stdio.h>

int main() {
    int array1[10], array2[10], sumArray[10]; // Arrays to hold the integers and their sum

    // Read the first array
    printf("Enter 10 integers for the first array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    // Read the second array
    printf("Enter 10 integers for the second array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array2[i]);
    }

    // Calculate the sum of the two arrays
    for (int i = 0; i < 10; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    // Print the result
    printf("\nSum of the two arrays:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i + 1, sumArray[i]);
    }

    return 0;
}
