#include <stdio.h>

int main() {
    int size = 5; // Size of the pattern

    // Loop to print each row
    for (int i = 0; i < size; i++) {
        // Loop to print each column
        for (int j = 0; j < size; j++) {
            // Print '1' in the diagonal position and '0' otherwise
            if (j == size - i - 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
