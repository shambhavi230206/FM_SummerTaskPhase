#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive function to compress the string
void compress(char *str, int index, int count) {
    // Base case: if end of string
    if (str[index] == '\0') {
        printf("%c%d", str[index - 1], count);  // Print last character and count
        return;
    }

    // If current char same as previous, increment count
    if (str[index] == str[index - 1]) {
        compress(str, index + 1, count + 1);
    } else {
        // Else print previous char and its count, and start new count
        printf("%c%d", str[index - 1], count);
        compress(str, index + 1, 1);
    }
}

int main() {
    char str[100];

    printf("Enter a lowercase alphabetic string: ");
    scanf("%s", str);

    // Input validation: allow only letters, reject numbers/floats/symbols
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            printf("Invalid input! Please enter only alphabetic characters.\n");
            return 1;
        }
    }

    printf("Compressed string: ");
    compress(str, 1, 1);  // Start from index 1, initial count 1
    printf("\n");

    return 0;
}


