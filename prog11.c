#include <stdio.h>

int main() {
    long int total_seconds;
    int hours, minutes, seconds;

    // Input total seconds
    printf("Enter total seconds: ");
    scanf("%ld", &total_seconds);

    // Calculate hours, minutes, and seconds
    hours = total_seconds / 3600;           // 1 hour = 3600 seconds
    total_seconds %= 3600;                  // Remaining seconds after hours
    minutes = total_seconds / 60;           // 1 minute = 60 seconds
    seconds = total_seconds % 60;           // Remaining seconds after minutes

    // Display the time
    printf("Time: %d hours, %d minutes, %d seconds\n", hours, minutes, seconds);

    return 0;
}
