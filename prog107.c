#include <stdio.h>
#include <math.h>

// Function to flip the last N digits of a number
int flip(int num, int n) {
    int lastNDigits = num % (int)pow(10, n);  // Extract last N digits
    int remainingDigits = num / (int)pow(10, n);  // Remaining part of the number
    
    // Reverse the last N digits
    int reversed = 0;
    while (lastNDigits > 0) {
        reversed = reversed * 10 + (lastNDigits % 10);  // Reverse the digits
        lastNDigits /= 10;
    }
    
    // Combine the remaining part with the reversed digits
    int result = remainingDigits * (int)pow(10, n) + reversed;
    
    return result;
}

int main() {
    int num, n;
    
    // Read input from user
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);
    
    // Call flip function and display the result
    printf("Flipped result: %d\n", flip(num, n));
    
    return 0;
}
