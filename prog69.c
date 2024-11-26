#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

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
    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d.\n", search, i);
            found = 1; // mark found as true
            break; // exit loop after finding the element
        }
    }

    // if the element IS missing
    if (!found) {
        printf("Element %d not found in the array.\n", search);
    }

    return 0; 
    
}
