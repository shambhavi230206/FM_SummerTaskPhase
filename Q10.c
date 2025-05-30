#include <stdio.h>

int main() {
    int arr[100], n, i=0, j = 0, temp, x, low, high, mid, found=0, pos = -1;

    scanf("%d", &n);

    for(i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n-1;i++) {
        for(j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low<=high) {
        mid = (low + high)/2;
        if(arr[mid]==x) {
            found = 1;
            pos = mid;
            break;
        } else if(x < arr[mid]) {
            high = mid - 1;
        } else {
            low = low + 1;
        }
    }

    if(found==1) {
        printf("Element found at index %d\n", pos);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
