#include <stdio.h>

struct product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    int n, i, maxQ = 0, maxP = 0;
    float total = 0;
    struct product p[100];

    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d %s %d %f", &p[i].id, p[i].name, &p[i].quantity, &p[i].price);
    }

    for(i=0; i<n; i++) {
        total = total + (p[i].quantity * p[i].price);
        if(p[i].quantity > p[maxQ].quantity) {
            maxQ = i;
        }
        if(p[i].price > p[maxP].price) {
            maxP = i;
        }
    }

    printf("Total inventory value: %.2f\n", total);
    printf("Product with highest quantity:\n");
    printf("%d %s %d %.2f\n", p[maxQ].id, p[maxQ].name, p[maxQ].quantity, p[maxQ].price);
    printf("Product with highest price:\n");
    printf("%d %s %d %.2f\n", p[maxP].id, p[maxP].name, p[maxP].quantity, p[maxP].price);

    return 0;
}
