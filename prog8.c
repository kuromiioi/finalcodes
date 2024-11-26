#include <stdio.h>

int main() {
    long int total_seconds = 31558150;
    int days, hours, minutes, seconds;

    days = total_seconds / 86400;          // 1 day = 86400 seconds
    total_seconds %= 86400;
    hours = total_seconds / 3600;          // 1 hour = 3600 seconds
    total_seconds %= 3600;
    minutes = total_seconds / 60;          // 1 minute = 60 seconds
    seconds = total_seconds % 60;          // Remaining seconds

    printf("%d days, %d hours, %d minutes, %d seconds\n", days, hours, minutes, seconds);

    return 0;
}
