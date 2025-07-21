#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;  // 0th term
    else if (n == 1)
        return 1;  // 1st term
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

int main() {
    int n;

    printf("Enter a non-negative integer to find the nth Fibonacci number: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Invalid input! Please enter a non-negative whole number.\n");
        return 1;
    }

    int result = fibonacci(n);
    printf("The %dth term of the Fibonacci series is: %d\n", n, result);

    return 0;
}


