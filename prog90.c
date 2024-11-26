#include <stdio.h>

// Function to calculate lengths using pointers
void calculateLengths(const char *str, int *lengthWithSpaces, int *lengthWithoutSpaces) {
    *lengthWithSpaces = 0;
    *lengthWithoutSpaces = 0;

    while (*str != '\0') {
        (*lengthWithSpaces)++;  // Increment length with spaces for every character
        if (*str != ' ') {
            (*lengthWithoutSpaces)++;  // Increment only if the character is not a space
        }
        str++;  // Move the pointer to the next character
    }
}

int main() {
    char str[100]; // Declare a string to hold user input
    int lengthWithSpaces = 0, lengthWithoutSpaces = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Use gets() for compatibility with older compilers

    // Calculate lengths
    calculateLengths(str, &lengthWithSpaces, &lengthWithoutSpaces);

    // Output the results
    printf("Length including spaces: %d\n", lengthWithSpaces);
    printf("Length excluding spaces: %d\n", lengthWithoutSpaces);

    return 0;
}
