#include <stdio.h>
int Fibonacci(int n){
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }
    int a = 0;
    int b = 1;
    printf("Fibonacci sequence:\n");
    for (int i = 1; i <= n; i++) {
        printf("%d\t", a); // Print the current Fibonacci number
        int c = a + b; // Calculate the next Fibonacci number
        a = b; // Update a to the next Fibonacci number
        b = c; // Update b to the next Fibonacci number
    }
}
int main() {
    int n; 
    printf("Enter the number of Fibonacci numbers to print: ");
    scanf("%d", &n); 
    Fibonacci(n);
     return 0; 
}
