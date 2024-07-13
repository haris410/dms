// LAB-7 
// Write a Program to find Fibonacci series using recursion


#include <stdio.h>

// Function to calculate Fibonacci number using recursion
int fibonacci(int n) 
{     
    // Base cases
    if (n == 0)        
        return 0;     
    else if (n == 1)        
        return 1;
    else 
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return (fibonacci(n-1) + fibonacci(n-2)); 
} 

int main() 
{   
    int n; 
    
    printf("Enter the number of terms: ");    
    scanf("%d", &n);    
    
    printf("Fibonacci Series: "); 
    
    for (int i = 0; i < n; i++) 
    { 
        printf("%d ", fibonacci(i)); 
    } 
    
    return 0; 
}
