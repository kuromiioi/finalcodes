//find digits problem

#include <stdio.h>

int findDigits(long long n) {
    long long original = n; 
    int count = 0;

    while (n > 0) {
        int digit = n % 10; 
// Check if the digit is non-zero and divides the number
        if (digit != 0 && original % digit == 0) {
            count++;
        }
    n/= 10; // Remove the last digit
    }
return count;
}

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        long long n;
        scanf("%lld", &n);
// Calculate and print the result for each test case
        printf("%d\n", findDigits(n));
    }

    return 0;
}
