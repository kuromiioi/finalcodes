#include <stdio.h>

int main() {
    int height = 5; // Height of the triangle

    // Loop to print each row
    for (int i = 1; i <= height; i++) {
        // Print leading spaces to center the triangle
        for (int j = height; j > i; j--) {
            printf(" ");
        }
        // Print numbers for the current row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
