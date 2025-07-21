#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main() {
char str[100], temp; int i, r, vowels = 0, consonants = 0, len;

    printf("Enter a string (max 99 characters): ");
        fgets(str, sizeof(str), stdin);

  len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
     str[len - 1] = '\0';
       len--;
    }

     for(i = 0; str[i] != '\0'; i++) {
       char ch = tolower(str[i]);
   if (ch >= 'a' && ch <= 'z') {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
         vowels++;
        } else {
      consonants++;
     }
  }
      }

   printf("Vowels: %d\n", vowels);
    printf("Consanants: %d\n", consonants);

     srand(time(0));
  for(i = 0; i < len; i++) {
      r = rand() % len;
   temp = str[i];
 str[i] = str[r];
       str[r] = temp;
 }

     printf("Scrambled string: %s\n", str);

return 0;
}
