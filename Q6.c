#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    char str[100];
    int i;
    int vowels = 0;
    int consonants = 0;
    int len;
    char temp;
    int r;

    scanf("%s", str);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i]>='a' && str[i]<='z') {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if(str[i]>='A' && str[i]<='Z') {
            if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    srand(time(0));
    len = strlen(str);

    for(i=0; i<len; i++) {
        r = rand()%len;
        temp = str[i];
        str[i] = str[r];
        str[r] = temp;
    }

    printf("Scrambled string: %s\n", str);

    return 0;
}
