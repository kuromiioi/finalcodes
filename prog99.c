#include <stdio.h>
#include <ctype.h>  // For tolower() function

int main() {
    FILE *file;
    char ch;
    int vowelCount = 0;

    // Open the file in read mode
    file = fopen("textfile.txt", "r");

    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Convert the character to lowercase for uniform checking
        ch = tolower(ch);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Close the file
    fclose(file);

    // Output the number of vowels found in the file
    printf("Number of vowels in the file: %d\n", vowelCount);

    return 0;
}
