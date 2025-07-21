#include <stdio.h>

int main() {
    float temp;
    char ch;
    int n;

    printf("Enter the number of rows (positive integer): ");
    if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n' || (int)temp != temp || temp <= 0) {
        printf("Invalid input. Please enter a positive integer only.\n");
        return 1;
    }
    n = (int)temp;

    printf("\nStar Pattern:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

