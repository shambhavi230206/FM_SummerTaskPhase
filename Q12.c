
#include <stdio.h>

int main() {
int i, j, space, n, stars;

    printf("enter no of rows: ");
    scanf("%d", &n);

i = 1;

while(i <= n)
{
space = n - i;
        while(space > 0)
        {
      printf(" ");
space = space - 1;
        }

j = 1;
while(j <= (2 * i - 1))
{
    printf("*");
        j = j + 1;
}

        printf("\n");
    i = i + 1;
}

    return 0;
}
