#include <stdio.h>

int main() {
    int units;
    int bill;

    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 300) {
        bill = 100 * 5;
        bill = bill + (units - 100) * 8;
    } else {
        bill = 100 * 5;
        bill = bill + 200 * 8;
        bill = bill + (units - 300) * 10;
    }

    printf("Total bill is ₹%d\n", bill);

    return 0;
}
