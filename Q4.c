#include <stdio.h>
#include <string.h>

int main() {
    char password[20];
    int attempts;

    attempts = 0;

    while (attempts < 3) {
        scanf("%s", password);

        if (strcmp(password, "pass123") == 0) {
            printf("Login successful\n");
            break;
        } else {
            printf("Wrong password\n");
            attempts = attempts + 1;
        }
    }

    if (attempts == 3) {
        printf("Login failed. Try again later.\n");
    }

    return 0;
}
