#include <stdio.h>

// Function to swap two elements
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    int i, j, minIndex;

    // Traverse through the array
    for (i = 0; i < n - 1; i++) {
        minIndex = i; // Assume the current element is the smallest

        // Find the index of the smallest element in the remaining unsorted array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            swap(&arr[i], &arr[minIndex]);
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100];  // Fixed size array
    int n, i;

    // Input size of the array (limit to 100)
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Check if n is within bounds
    if (n > 100) {
        printf("Please enter up to 100 elements.\n");
        return 1;
    }

    // Input elements of the array
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using selection sort
    selectionSort(arr, n);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
