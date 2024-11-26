#include <stdio.h>

// Function to find the pivot element
int findPivot(int arr[], int low, int high) {
    // If the array is not rotated
    if (high < low) {
        return -1; // No pivot found
    }
    if (high == low) {
        return low; // Found the pivot
    }

    int mid = (low + high) / 2;

    // Check if mid is pivot
    if (mid < high && arr[mid] > arr[mid + 1]) {
        return mid + 1;
    }
    if (mid > low && arr[mid] < arr[mid - 1]) {
        return mid; // Found the pivot
    }

    // Decide which half to choose for searching
    if (arr[low] >= arr[mid]) {
        return findPivot(arr, low, mid - 1); // Search in left half
    } else {
        return findPivot(arr, mid + 1, high); // Search in right half
    }
}

int main() {
    int arr[100], n, pivotIndex;

    // Input number of elements in the array
    printf("Enter the number of elements in the sorted and rotated array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Find the pivot element
    pivotIndex = findPivot(arr, 0, n - 1);

    // Output the result
    if (pivotIndex != -1) {
        printf("The pivot element is %d at index %d.\n", arr[pivotIndex], pivotIndex);
    } else {
        printf("No pivot element found in the array.\n");
    }

    return 0;
}
