#include <stdio.h>

int main() {
    int arr[100], n, i, search, count = 0; // Declare array and variables

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to count occurrences: ");
    scanf("%d", &search);

    // Count occurrences of the search element
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            count++; // Increment count if the element is found
        }
    }

    // Output the result
    if (count > 0) {
        printf("Element %d occurs %d time(s) in the array.\n", search, count);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}
