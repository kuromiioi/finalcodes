#include <stdio.h>
#include <math.h> // For sqrt function

int main() {
    int n, i;
    int isPrime = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d is neither prime nor composite.\n", n);
        return 0;
    }

    if (n == 2 || n == 3) {
        printf("%d is a prime number.\n", n);
    } else if (n % 2 == 0 || n % 3 == 0) {
        printf("%d is a composite number.\n", n);
    } else {
        int limit = (int)sqrt(n);
        for (i = 5; i <= limit; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                isPrime = 0;
                break;
            }
        }
        printf("%d is %s number.\n", n, isPrime ? "prime" : "composite");
    }

    return 0;
}

