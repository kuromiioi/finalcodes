#include <stdio.h>

// Function to swap characters using pointers
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to calculate the length of the string manually
int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to generate permutations of the string
void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);  // Print the current permutation
    } else {
        for (int i = left; i <= right; i++) {
            swap((str + left), (str + i));  // Swap character at index left with i
            permute(str, left + 1, right);  // Recursively generate permutations
            swap((str + left), (str + i));  // Backtrack to restore the string
        }
    }
}

int main() {
    char str[] = "ABCD";  // Input string
    int n = stringLength(str);   // Find the length of the string using custom function

    printf("The permutations of the string are:\n");
    permute(str, 0, n - 1);  // Call the permute function starting from index 0

    return 0;
}
