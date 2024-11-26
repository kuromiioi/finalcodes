#include <stdio.h>

double Y(double x, int n) {
    if (n == 1) {
        return 1 + x;
    } else if (n == 2) {
        return 1 + (x / n);
    } else if (n == 3) {
        return 1 + (x * n);
    } else {
        return 1 + (n * x);
    }
}

int main() {
    double x, y;
    int n;

    // Reading the values of x and n from the user
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculating the value of Y(x, n)
    y = Y(x, n);

    // Printing the result
    printf("The value of Y(%.2lf, %d) = %.2lf\n", x, n, y);

    return 0;
}
