#include <stdio.h>

int main() {
int n, i, j;
n = 0; i = 0; j = 0;

printf("Enter how many rows you want: ");
scanf("%d", &n);

i = 1;
while(i<=n)
{
   j = 1;
      while(j<=i)
      {
         printf("*");
         j = j + 1;
      }
   printf("\n");
   i = i + 1;
}
return 0;
}
