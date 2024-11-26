#include <stdio.h>

int main() {
    float M, P, C, E, CM;

    // Input marks in Mathematics, Physics, Chemistry, and entrance examination
    printf("Enter marks in Mathematics (out of 200): ");
    scanf("%f", &M);

    printf("Enter marks in Physics (out of 200): ");
    scanf("%f", &P);

    printf("Enter marks in Chemistry (out of 200): ");
    scanf("%f", &C);

    printf("Enter marks in entrance examination (out of 100): ");
    scanf("%f", &E);

    // Calculate the cut-off mark
    CM = (M / 2) + (P / 2) + (C / 2) + E;

    // Display the cut-off mark
    printf("Cut-off mark (CM): %.2f\n", CM);

    return 0;
}
