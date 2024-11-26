#include <stdio.h>
#include <ctype.h>  // For character handling functions

int main() {
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Check the type of character
    if (isupper(character)) {
        printf("'%c' is an uppercase letter.\n", character);
    } else if (islower(character)) {
        printf("'%c' is a lowercase letter.\n", character);
    } else if (isdigit(character)) {
        printf("'%c' is a digit.\n", character);
    } else {
        printf("'%c' is a special symbol.\n", character);
    }

    return 0;
}
