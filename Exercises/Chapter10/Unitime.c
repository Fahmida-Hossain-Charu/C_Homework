#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm *systime, *gmt;
    time_t t;

    t = time(NULL); // Get current time
    systime = localtime(&t); // Convert to local time

    // Print local time
    printf("Time is %.2d:%.2d:%.2d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);

    gmt = gmtime(&t); // Convert to GMT/UTC time
    // Print GMT/UTC time
    printf("Coordinated Universal Time is %.2d:%.2d:%.2d\n", gmt->tm_hour, gmt->tm_min, gmt->tm_sec);

    return 0;
}