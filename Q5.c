#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, k;
    const float epsilon = 0.0001;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);
 float arr[n];
 printf("Enter %d elements (decimals allowed):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
            if (fabs(arr[i] - arr[j]) < epsilon) {
           for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
          n = n - 1;
          j = j - 1;
          }
     }
    }

    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    return 0;
}
