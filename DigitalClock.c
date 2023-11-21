#include <stdio.h>
#include <time.h>
#include <unistd.h>

// Function to display the digital clock
void displayDigitalClock() {
    while (1) {
        // Get the current time
        time_t currentTime;
        struct tm *timeInfo;
        time(&currentTime);
        timeInfo = localtime(&currentTime);

        // Display the digital clock
        printf("%02d:%02d:%02d\r", timeInfo->tm_hour, timeInfo->tm_min, timeInfo->tm_sec);
        fflush(stdout);

        // Wait for one second
        sleep(1);
    }
}

int main() {
    // Call the function to display the digital clock
    displayDigitalClock();

    return 0;
}
