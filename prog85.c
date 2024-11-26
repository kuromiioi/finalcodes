#include <stdio.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    // Convert character to lowercase for uniformity
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch; // Convert uppercase to lowercase
    
    // Check if the character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1; // Return 1 if it is a vowel
    }
    return 0; // Return 0 if it is not a vowel
}

int main() {
    char ch;

    // Input a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch); // The space before %c helps to ignore any previous newline character

    // Check if the character is a vowel
    if (isVowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
