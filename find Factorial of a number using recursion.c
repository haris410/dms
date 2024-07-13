// 6.Write a Program to find Factorial of a number using recursion.  

#include <stdio.h>

long int factorial(int n);

int main() 
{ 
    int n; 
    printf("Enter a positive integer: "); 
    scanf("%d", &n); 
    
    // Check if the number is negative
    if (n < 0) {
        printf("Factorial of a negative number is undefined.\n");
    } else {
        printf("Factorial of %d = %ld\n", n, factorial(n)); 
    }
    
    return 0; 
} 

long int factorial(int n) 
{ 
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n * factorial(n-1)
        return n * factorial(n - 1); 
    }
}

