#include <stdio.h>

// Function to reverse an array
void reverseArray(int arr[], int n) {
    int i, temp;

    // Swap elements from start and end until the middle is reached
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
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

    // Reverse the array
    reverseArray(arr, n);

    // Print the reversed array
    printf("Reversed array: \n");
    printArray(arr, n);

    return 0;
}
