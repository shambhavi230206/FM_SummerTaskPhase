#include <stdio.h>

int main() {
int n, i;
    int arr[100];
int *p, temp;

    printf("Enter the number of elements (max 100): ");
scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of elements.\n");
            return 1;
    }

  printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

p = arr;

    for(i = 0; i < n - 1; i = i + 2) {
     temp = *(p + i);
        *(p + i) = *(p + i + 1);
  *(p + i + 1) = temp;
    }

printf("Array after swapping adjacent elements:\n");
        for(i = 0; i < n; i++) {
    printf("%d ", *(p + i));
    }
printf("\n");

    return 0;
}
