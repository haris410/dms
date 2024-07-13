// LAB-3 
// Write  a program to find sum of the first 10 terms of the sequence 1/n2.  


#include <stdio.h>
#include <math.h>

int main() 
{ 
    int n, i; 
    double sum = 0.0, ser; 
    
    printf("Enter the number of terms of the sequence to sum: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    { 
        ser = 1.0 / pow(i, 2);  // Calculate 1/i^2
        sum = sum + ser;  // Add the term to the sum
    } 

    printf("Sum of the first %d terms of the sequence is = %lf\n", n, sum);     
    return 0; 
}

