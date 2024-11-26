#include <stdio.h>

int main() {
    // Loop to print rows
    for (int i = 1; i <= 5; i++) {
        // Print leading spaces for right alignment
        for (int j = 5; j > i; j--) {
            printf(" ");
        }
        
        // Print the numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}
