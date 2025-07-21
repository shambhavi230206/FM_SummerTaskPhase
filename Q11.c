#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define NAME_LEN 50

// Define structure for product
struct Product {
    int productID;
    char name[NAME_LEN];
    int quantity;
    float price;
};

int main() {
    struct Product products[MAX_PRODUCTS];
    int n;
    float totalValue = 0.0;
    float tempPrice;
    float maxPrice = 0.0;
    int maxQuantity = 0;
    int maxQtyIndex = 0, maxPriceIndex = 0;
    char ch;
    float temp;
    
    // Take number of products
    printf("Enter number of products (1 to %d): ", MAX_PRODUCTS);
    if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n' || (int)temp != temp || temp <= 0 || temp > MAX_PRODUCTS) {
        printf("Invalid input. Please enter a valid positive integer.\n");
        return 1;
    }
    n = (int)temp;

    // Input product details
    for (int i = 0; i < n; i++) {
        printf("\n--- Enter details for product %d ---\n", i + 1);

        // Product ID
        printf("Product ID: ");
        if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n' || (int)temp != temp) {
            printf("Invalid Product ID. Must be an integer.\n");
            return 1;
        }
        products[i].productID = (int)temp;

        // Clear newline before taking string input
        while ((getchar()) != '\n');

        // Product Name
        printf("Product Name: ");
        fgets(products[i].name, NAME_LEN, stdin);
        products[i].name[strcspn(products[i].name, "\n")] = '\0'; // remove trailing newline

        // Quantity
        printf("Quantity: ");
        if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n' || (int)temp != temp || temp < 0) {
            printf("Invalid Quantity. Must be a non-negative integer.\n");
            return 1;
        }
        products[i].quantity = (int)temp;

        // Price
        printf("Price: ");
        if (scanf("%f%c", &tempPrice, &ch) != 2 || ch != '\n' || tempPrice < 0) {
            printf("Invalid Price. Must be a non-negative float.\n");
            return 1;
        }
        products[i].price = tempPrice;

        // Calculate total inventory value
        totalValue += products[i].quantity * products[i].price;

        // Track max quantity
        if (products[i].quantity > maxQuantity) {
            maxQuantity = products[i].quantity;
            maxQtyIndex = i;
        }

        // Track max price
        if (products[i].price > maxPrice) {
            maxPrice = products[i].price;
            maxPriceIndex = i;
        }
    }

    // Output results
    printf("\n============================\n");
    printf("Total Inventory Value: ₹%.2f\n", totalValue);

    printf("\nProduct with Highest Quantity:\n");
    printf("ID: %d\n", products[maxQtyIndex].productID);
    printf("Name: %s\n", products[maxQtyIndex].name);
    printf("Quantity: %d\n", products[maxQtyIndex].quantity);
    printf("Price: ₹%.2f\n", products[maxQtyIndex].price);

    printf("\nProduct with Highest Price:\n");
    printf("ID: %d\n", products[maxPriceIndex].productID);
    printf("Name: %s\n", products[maxPriceIndex].name);
    printf("Quantity: %d\n", products[maxPriceIndex].quantity);
    printf("Price: ₹%.2f\n", products[maxPriceIndex].price);

    return 0;
}


