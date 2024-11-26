#include <stdio.h>

int main() {
    char str[100]; // String to hold the input
    char *ptr;     // Pointer to traverse the string
    int vowelCount = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str); // Use gets() for compatibility with older compilers

    ptr = str; // Initialize pointer to the start of the string

    // Traverse the string
    while (*ptr != '\0') {
        // Check if the current character is a vowel
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            vowelCount++;
        }
        ptr++; // Move the pointer to the next character
    }

    // Output the number of vowels
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}
