#include <stdio.h>

int main() {
    int arr[100], n, i, max, second;
    int *p;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;
    max = *p;
    second = -1;

    for(i = 1; i < n; i++) {
        if(*(p + i) > max) {
            second = max;
            max = *(p + i);
        } else if(*(p + i) != max && (*(p + i) > second || second == -1)) {
            second = *(p + i);
        }
    }

    printf("Second largest number is %d\n", second);

    return 0;
}
