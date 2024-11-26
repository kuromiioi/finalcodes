#include <stdio.h>

int main() {
    int i, j;

    // Loop to control the number of rows
    for (i = 1; i <= 5; i++) {
        // Loop to print characters in each row
        for (j = 0; j < i; j++) {
            // Print character starting from 'A'
            printf("%c", 'A' + j);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
