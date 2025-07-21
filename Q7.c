#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i, max, second;
    int *p;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 2) {
        printf("At least two elements are required to find the second largest number.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    p = arr;
    max = *p;
    second = INT_MIN;

    for(i = 1; i < n; i++) {
        if(*(p + i) > max) {
            second = max;
            max = *(p + i);
        } else if(*(p + i) != max && *(p + i) > second) {
            second = *(p + i);
        }
    }

    if (second == INT_MIN) {
        printf("No second largest number found (all elements may be equal).\n");
    } else {
        printf("Second largest number is %d\n", second);
    }

    return 0;
}
