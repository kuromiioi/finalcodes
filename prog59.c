#include <stdio.h>

int main() {
    int array1[10], array2[10]; // Arrays to hold the integers

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

    // Swap the values of the two arrays
    for (int i = 0; i < 10; i++) {
        int temp = array1[i]; // Temporary variable to hold value
        array1[i] = array2[i]; // Swap values
        array2[i] = temp;
    }

    // Print the swapped arrays
    printf("\nAfter swapping:\n");
    printf("First array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i + 1, array1[i]);
    }

    printf("Second array:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i + 1, array2[i]);
    }

    return 0;
}
