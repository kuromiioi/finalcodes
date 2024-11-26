#include <stdio.h>

int main() {
    char str[100];  // String to hold the input
    char *ptr;      // Pointer to traverse the string
    int wordCount = 0, inWord = 0;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // Use gets() for older compilers

    ptr = str;  // Initialize pointer to the start of the string

    // Traverse the string
    while (*ptr != '\0') {
        if (*ptr != ' ' && *ptr != '\t' && *ptr != '\n') {
            if (inWord == 0) {  // New word starts
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;  // End of a word
        }
        ptr++;  // Move to the next character
    }

    // Output the word count
    printf("Number of words in the string: %d\n", wordCount);

    return 0;
}
