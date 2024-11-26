#include <stdio.h>
#include <limits.h>

int main() {
    int n, num, max = INT_MIN, min = INT_MAX;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) return 1;

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num > max) max = num;
        if (num < min) min = num;
    }

    printf("Max: %d, Min: %d\n", max, min);

    return 0;
}

