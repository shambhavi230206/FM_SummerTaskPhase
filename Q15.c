#include <stdio.h>
#include <string.h>

void compress(char str[], int i, int len, int count)
{
char current; 
current = ' ';
if(i == len) 
{
    printf("%c%d", str[i-1], count);
    return;
}

current = str[i];

if(i == 0)
{
    compress(str, i+1, len, 1);
}
else
{
    if(str[i] == str[i-1])
    {
        count = count + 1;
        compress(str, i+1, len, count);
    }
    else
    {
        printf("%c%d", str[i-1], count);
        compress(str, i+1, len, 1);
    }
}
}

int main()
{
char s[100];
int length;
printf("Enter the string: ");
scanf("%s", s);

length = strlen(s);

compress(s, 0, length, 0);

printf("\n");
return 0;
}
