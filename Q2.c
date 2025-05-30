#include <stdio.h>

int main() {
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;

    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %d\n", seconds);

    return 0;
}
