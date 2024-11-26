#include <stdio.h>
#include <string.h>

#define MAX 100  // Maximum number of strings
#define LEN 100  // Maximum length of a string

int main() {
    char *strings[MAX], temp[LEN];
    int n, i, j;

    // Input the number of strings
    printf("Enter the number of strings (N): ");
    scanf("%d", &n);
    getchar(); // Clear the newline character left by scanf

    // Allocate memory for strings and input the strings
    for (i = 0; i < n; i++) {
        strings[i] = (char *)malloc(LEN * sizeof(char)); // Allocate memory for each string
        if (strings[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
        printf("Enter string %d: ", i + 1);
        gets(strings[i]);
    }

    // Sort the strings using pointers
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                // Swap strings[i] and strings[j] using a temporary pointer
                char *temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        }
    }

    // Print the sorted strings
    printf("\nStrings in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    // Free the allocated memory
    for (i = 0; i < n; i++) {
        free(strings[i]);
    }

    return 0;
}
