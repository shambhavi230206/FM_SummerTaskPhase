#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *p, temp;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;

    for(i = 0; i < n - 1; i = i + 2) {
        temp = *(p + i);
        *(p + i) = *(p + i + 1);
        *(p + i + 1) = temp;
    }

    for(i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    return 0;
}
