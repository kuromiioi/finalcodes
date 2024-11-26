#include <stdio.h>

// Define an enumeration for colors
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    WHITE,
    BLACK
};

int main() {
    enum Color color;

    // Ask the user to choose a color
    printf("Enter a color (0 for RED, 1 for GREEN, 2 for BLUE, 3 for YELLOW, 4 for WHITE, 5 for BLACK): ");
    scanf("%d", &color);

    // Use a switch statement to display the hexadecimal color code
    switch (color) {
        case RED:
            printf("The color is Red. Hexadecimal code: #FF0000\n");
            break;
        case GREEN:
            printf("The color is Green. Hexadecimal code: #00FF00\n");
            break;
        case BLUE:
            printf("The color is Blue. Hexadecimal code: #0000FF\n");
            break;
        case YELLOW:
            printf("The color is Yellow. Hexadecimal code: #FFFF00\n");
            break;
        case WHITE:
            printf("The color is White. Hexadecimal code: #FFFFFF\n");
            break;
        case BLACK:
            printf("The color is Black. Hexadecimal code: #000000\n");
            break;
        default:
            printf("Invalid color choice!\n");
            break;
    }

    return 0;
}
