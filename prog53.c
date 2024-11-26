#include <stdio.h>

int main() {
    int height = 5; // Total height (for the top part)

    // Print the top part of the diamond
    for (int i = 1; i <= height; i++) {
        // Print leading spaces to center the triangle
        for (int j = height; j > i; j--) {
            printf(" ");
        }
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    // Print the bottom part of the diamond
    for (int i = height - 1; i >= 1; i--) {
        // Print leading spaces to center the triangle
        for (int j = height; j > i; j--) {
            printf(" ");
        }
        // Print stars for the current row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
