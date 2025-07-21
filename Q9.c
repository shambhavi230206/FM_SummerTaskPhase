#include <stdio.h>

#define SIZE 4

int main() {
    int matrix[SIZE][SIZE];
    float temp;
    char ch;
    int totalSum = 0;
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    printf("Enter elements for a 4x4 integer matrix (one by one):\n");

    // Input loop with float checking
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Element [%d][%d]: ", i, j);

            if (scanf("%f%c", &temp, &ch) != 2 || ch != '\n') {
                printf("❌ Invalid input. Please enter an integer value only.\n");
                return 1;
            }

            // Check if it's a float (e.g. 3.5 is not allowed)
            if ((int)temp != temp) {
                printf("❌ Float detected. Please enter an integer only.\n");
                return 1;
            }

            matrix[i][j] = (int)temp;
        }
    }

    // Print the matrix
    printf("\nEntered 4x4 Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%5d", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate total sum and diagonal sums
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            totalSum += matrix[i][j];

            if (i == j)
                primaryDiagonalSum += matrix[i][j];

            if (i + j == SIZE - 1)
                secondaryDiagonalSum += matrix[i][j];
        }
    }

    // Output results
    printf("\nSum of all elements: %d\n", totalSum);
    printf("Sum of primary diagonal: %d\n", primaryDiagonalSum);
    printf("Sum of secondary diagonal: %d\n", secondaryDiagonalSum);

    return 0;
}
