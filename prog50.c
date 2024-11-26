#include <stdio.h>

int main() {
    // Loop to print rows
    for (char ch = 'A'; ch <= 'E'; ch++) {
        // Loop to print the character multiple times
        for (int j = 1; j <= (ch - 'A' + 1); j++) {
            printf("%c", ch);
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
