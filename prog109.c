#include <stdio.h>

int main() {
    int num = 10;           // Normal variable
    int *ptr = &num;        // Initialize pointer with the address of 'num'

    printf("Original value of num: %d\n", num);

    // Modify the value of 'num' using the pointer
    *ptr = 20;

    printf("Modified value of num using pointer: %d\n", num);

    return 0;
}
