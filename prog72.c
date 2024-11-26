#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    int i, temp[100]; // Temporary array to hold the rotated values

    // Normalize d to ensure it's within the bounds of the array size
    d = d % n; // In case d is greater than n

    // Copy the last d elements to the temporary array
    for (i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }

    // Shift the remaining elements to the right
    for (i = n - 1; i >= d; i--) {
        arr[i] = arr[i - d];
    }

    // Copy the elements from the temporary array back to the original array
    for (i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[100], n, d, i;

    // Input number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &d);

    // Rotate the array
    rotateArray(arr, n, d);

    // Output the rotated array
    printf("Array after rotating by %d positions:\n", d);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
