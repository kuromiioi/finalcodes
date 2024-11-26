#include <stdio.h>

int main() {
    char character;
    
    // Input a character
    printf("Enter a character: ");
    scanf("%c", &character);
    
    // Print the ASCII code of the character
    printf("The ASCII code of '%c' is %d\n", character, (int)character);
    
    return 0;
}
