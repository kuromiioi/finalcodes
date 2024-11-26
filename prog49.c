#include <stdio.h>

int main() {
    int height = 5; // Height of the triangle

    // Loop to print each row
    for (int i = 1; i <= height; i++) {
        // Print leading spaces to center the triangle
        for (int j = height; j > i; j--) {
            printf(" ");
        }
        // Print stars for the current row
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
