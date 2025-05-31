#include <stdio.h>

int main() {
FILE *fp;
char ch;
int characters, words, lines, inWord;
characters = 0; words = 0; lines = 0; inWord = 0;
fp = NULL; ch = ' ';

char filename[100];
printf("Enter filename: ");
scanf("%s", filename);

fp = fopen(filename, "r");
if(fp == NULL) {
    printf("File not found!\n");
    return 1;
}

while(1)
{
   ch = fgetc(fp);
   if(ch == EOF)
   {
      break;
   }
   characters = characters + 1;

   if(ch == '\n')
   {
      lines = lines + 1;
   }
   if(ch == ' ' || ch == '\n' || ch == '\t')
   {
      inWord = 0;
   }
   else
   {
      if(inWord == 0)
      {
         words = words + 1;
         inWord = 1;
      }
   }
}
fclose(fp);

printf("Characters: %d\n", characters);
printf("Words: %d\n", words);
printf("Lines: %d\n", lines);

return 0;
}
