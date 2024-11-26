#include <stdio.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0; // Initialize length to 0
    while (str[length] != '\0') { // Loop until the null terminator is found
        length++; // Increment the length counter
    }
    return length; // Return the length of the string
}

int main() {
    char str[100]; // Array to hold the input string

    // Input a line of text from the user
    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin); // Read a line of text, including spaces

    // Calculate the length of the string
    int length = stringLength(str);

    // Display the length of the string
    printf("The length of the string is: %d\n", length);

    return 0;
}
