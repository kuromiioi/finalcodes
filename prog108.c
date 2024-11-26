#include <stdio.h>

void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null terminate the destination string
}

int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Difference in ASCII values
        }
        i++;
    }
    // Check for string length difference
    return str1[i] - str2[i];
}

void concatStrings(char dest[], char src[]) {
    int i = 0, j = 0;

    // Move to the end of dest string
    while (dest[i] != '\0') {
        i++;
    }

    // Append src to dest
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Null terminate the concatenated string
}

void reverseString(char str[]) {
    int start = 0, end = 0;

    // Find the length of the string
    while (str[end] != '\0') {
        end++;
    }
    end--; // Adjust for the last character index

    // Reverse the string
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str1[100], str2[100], str3[100];

    // A. Copy one string into another
    printf("Enter a string to copy: ");
    gets(str1); // Using gets for simplicity in Turbo C
    copyString(str2, str1);
    printf("Copied string: %s\n", str2);

    // B. Compare two strings
    printf("Enter two strings to compare:\n");
    printf("String 1: ");
    gets(str1);
    printf("String 2: ");
    gets(str2);
    int cmp = compareStrings(str1, str2);
    if (cmp == 0) {
        printf("Strings are equal.\n");
    } else if (cmp > 0) {
        printf("String 1 is greater.\n");
    } else {
        printf("String 2 is greater.\n");
    }

    // C. Concatenate two strings
    printf("Enter the first string for concatenation: ");
    gets(str1);
    printf("Enter the second string for concatenation: ");
    gets(str2);
    copyString(str3, str1); // Copy the first string to str3
    concatStrings(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // D. Reverse a given string
    printf("Enter a string to reverse: ");
    gets(str1);
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}
