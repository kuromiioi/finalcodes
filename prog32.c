#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("You need at least 2 numbers to find both maximum and second maximum.\n");
        return 1;
    }

    int numbers[n];
    int max = INT_MIN;         // Initialize max to the smallest possible integer value
    int second_max = INT_MIN;  // Initialize second_max to the smallest possible integer value

    // Read the numbers from the user
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Determine the maximum and second maximum values
    for (int i = 0; i < n; i++) {
        if (numbers[i] > max) {
            second_max = max;
            max = numbers[i];
        } else if (numbers[i] > second_max && numbers[i] < max) {
            second_max = numbers[i];
        }
    }

    if (second_max == INT_MIN) {
        printf("There is no second maximum value.\n");
    } else {
        printf("The maximum value is %d.\n", max);
        printf("The second maximum value is %d.\n", second_max);
    }

    return 0;
}

