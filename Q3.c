#include <stdio.h>

int main() {
    float units,bill;
    printf("enter number of electricity units");
    scanf("%f", &units);

    if (units < 0)
     {
        printf("Money can't be negative\n");
    } else if (units <= 100) {
        bill = units * 5;
    } else if (units <= 300)
     {
        bill = 100 * 5;
        bill = bill + (units - 100) * 8;
    } else {
        bill = 100 * 5;
        bill = bill + 200 * 8;
        bill = bill + (units - 300) * 10;
    }

    printf("Total bill is ₹%.2f\n", bill);
    return 0;
}
