#include <stdio.h>

int main() {
    int n, i, largest;
    int arr[100]; // Array to hold the integers
    int *ptr;     // Pointer for traversing the array

    // Input the number of elements
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Input the integers
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize pointer and largest value
    ptr = arr;      // Point to the first element of the array
    largest = *ptr; // Initialize largest with the first element

    // Traverse the array using the pointer
    for (i = 0; i < n; i++) {
        if (*(ptr + i) > largest) {
            largest = *(ptr + i); // Update largest if a bigger number is found
        }
    }

    // Output the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}
