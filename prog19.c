#include <stdio.h>

int main() {
    char ch;

    // Reading a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking if the character is a lowercase letter using the conditional operator
    (ch >= 'a' && ch <= 'z') ? printf("The character '%c' is a lowercase letter.\n", ch)
                             : printf("The character '%c' is NOT a lowercase letter.\n", ch);

    return 0;
}
