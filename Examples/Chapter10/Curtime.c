#include <stdio.h>
#include <time.h>

int main(void) {
    struct tm *systime;
    time_t t;

    t = time(NULL); // Get current time
    systime = localtime(&t); // Convert to local time

    // Print time in HH:MM:SS format
    printf("Time is %.2d:%.2d:%.2d\n", systime->tm_hour, systime->tm_min, systime->tm_sec);

    // Print date in MM/DD/YY format
    printf("Date: %.2d/%.2d/%.2d\n", systime->tm_mon + 1, systime->tm_mday, systime->tm_year % 100);

    return 0;
}