#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    printf("Enter the filename to read: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch)) {
            inWord = 0; // Outside a word
        } else if (!inWord) {
            inWord = 1; // Start of a new word
            words++;
        }
    }

    fclose(file);

    printf("\nFile analysis of '%s':\n", filename);
    printf("Characters: %d\n", characters);
    printf("Words     : %d\n", words);
    printf("Lines     : %d\n", lines);

    return 0;
}
