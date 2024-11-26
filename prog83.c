#include <stdio.h>

// Function to find the maximum element in an array
int findMax(int arr[], int size) {
    int max = arr[0]; // Initialize max with the first element
    int i;

    // Iterate through the array to find the maximum
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is greater
        }
    }
    return max; // Return the maximum element
}

int main() {
    int arr[100]; // Array to hold up to 100 elements
    int n, i;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display the maximum element
    int max = findMax(arr, n);
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
