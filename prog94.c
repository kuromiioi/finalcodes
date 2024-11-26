#include <stdio.h>
#include <string.h> // For string length function

int main() {
    char str[100], reverseStr[100]; // Original and reversed strings
    char *ptr1, *ptr2;             // Pointers for traversal
    int length, i;

    // Input the string
    printf("Enter a string: ");
    gets(str); // Use gets() for compatibility with older compilers

    length = strlen(str); // Get the length of the input string

    ptr1 = str + length - 1; // Point to the last character of the string
    ptr2 = reverseStr;       // Point to the start of the reversed string

    // Copy characters in reverse order
    for (i = 0; i < length; i++) {
        *ptr2 = *ptr1; // Copy the character
        ptr1--;        // Move backward in the original string
        ptr2++;        // Move forward in the reversed string
    }

    *ptr2 = '\0'; // Null-terminate the reversed string

    // Output the reversed string
    printf("Reversed string: %s\n", reverseStr);

    return 0;
}
