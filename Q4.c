#include <stdio.h>
#include <string.h>

int main() {
    char correctPassword[50],inputPassword[50];
    int attempts = 0;
    printf("Set your password: ");
    fgets(correctPassword, sizeof(correctPassword), stdin);
    size_t len = strlen(correctPassword);
    if (len > 0 && correctPassword[len - 1] == '\n') {
        correctPassword[len - 1] = '\0';
    }

    while (attempts < 3)
     {
        printf("Enter password (Attempt %d of 3): ", attempts + 1);
        fgets(inputPassword, sizeof(inputPassword), stdin);

       
        len = strlen(inputPassword);
        if (len > 0 && inputPassword[len - 1] == '\n') {
            inputPassword[len - 1] = '\0';
        }

        if (strcmp(inputPassword, correctPassword) == 0) {
            printf("Login successful\n");
            break;
        } else {
            printf("Wrong password\n");
            attempts++;
        }
    }

    if (attempts == 3) {
        printf("Login failed. Try again later.\n");
    }

    return 0;
}
