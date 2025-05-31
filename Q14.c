#include <stdio.h>

int fibonacci(int n) {
int result;
if(n == 0) {
    return 0; 
}
else if(n == 1) {
    return 1;
}
else {
    result = fibonacci(n-1) + fibonacci(n-2); 
}
return result;
}

int main() {
int n, answer;
n = 0; answer = 0;

printf("Enter which term you want (0-based index): ");
scanf("%d", &n);

if(n < 0) {
    printf("Negative numbers not allowed!!!\n");
    return 1;
}

answer = fibonacci(n);
printf("The %dth Fibonacci term is: %d\n", n, answer);

return 0;
}
