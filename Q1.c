#include <stdio.h>

int main() {
    int a, b, c;
    int sum;
    int i;
    int isPrime;

    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;

    printf("Sum of numbers is %d\n", sum);

    if (sum % 2 == 0) {
        printf("Sum is even\n");
    } else {
        printf("Sum is odd\n");
    }

    if (sum <= 1) {
        printf("Sum is neither prime nor composite\n");
    } else {
        isPrime = 1;

        for (i = 2; i < sum; i++) {
            if (sum % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("Sum is prime\n");
        } else {
            printf("Sum is composite\n");
        }
    }

    return 0;
}
