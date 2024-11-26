
#include <stdio.h>
#include <ctype.h>  // For checking if a character is a letter or digit

int main() {
    FILE *file;
    char ch;
    int charCount = 0, wordCount = 0, lineCount = 0;
    int inWord = 0;  // Flag to track if we are inside a word

    // Open the file in read mode
    file = fopen("textfile.txt", "r");

    if (file == NULL) {
        printf("Could not open the file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        charCount++;  // Increment character count

        // Check if the character is a newline
        if (ch == '\n') {
            lineCount++;  // Increment line count
        }

        // Check for the start of a word
        if (isalnum(ch)) {  // If the character is alphanumeric
            if (inWord == 0) {
                wordCount++;  // Start of a new word
                inWord = 1;    // Set the flag to indicate we are in a word
            }
        } else {
            inWord = 0;  // If the character is not alphanumeric, we are no longer in a word
        }
    }

    // If the file isn't empty, count the last line
    if (charCount > 0 && ch != '\n') {
        lineCount++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Total characters: %d\n", charCount);
    printf("Total words: %d\n", wordCount);
    printf("Total lines: %d\n", lineCount);

    return 0;
}
