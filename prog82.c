#include <stdio.h>

// Function to calculate factorial of a number
long factorial(int num) {
    long fact = 1; // Using long to handle larger factorials
    int i;
    for (i = 1; i <= num; i++) {
        fact *= i; // Multiply fact by i
    }
    return fact; // Return the factorial
}

// Function to calculate nCr
long nCr(int n, int r) {
    // Check if r is greater than n
    if (r > n) {
        return 0; // nCr is 0 if r > n
    }
    
    // Calculate nCr using the formula nCr = n! / (r! * (n - r)!)
    long num = factorial(n); // Calculate n!
    long denom = factorial(r) * factorial(n - r); // Calculate r! * (n - r)!
    
    return num / denom; // Return nCr
}

int main() {
    int n, r;
    
    // Input values for n and r
    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);
    
    // Calculate nCr
    long result = nCr(n, r);
    
    // Display the result
    printf("nCr(%d, %d) = %ld\n", n, r, result);
    
    return 0;
}
