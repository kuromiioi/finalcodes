#include <stdio.h>

int main() {
    int hours, minutes, seconds;
    int totalseconds;

    // Input time in hours, minutes, and seconds
    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    // Convert time to total seconds
    totalseconds = (hours * 3600) + (minutes * 60) + seconds;

    // Display the total seconds
    printf("Total seconds: %d\n", totalseconds);

    return 0;
}
