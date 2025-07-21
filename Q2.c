#include <stdio.h>

int main() {
    float inputSeconds,seconds;
    int hours, minutes;

    printf("Enter total seconds: ");
    scanf("%f",&inputSeconds);

    if (inputSeconds < 0) {
        printf("Time can't be negative\n");
        return 1;
    }

    hours = (int)(inputSeconds / 3600);
    inputSeconds -= hours * 3600;

    minutes = (int)(inputSeconds / 60);
    inputSeconds -= minutes * 60;

    seconds = inputSeconds; 

    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Seconds: %.2f\n", seconds); 

    return 0;
}
