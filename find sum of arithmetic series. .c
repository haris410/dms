// LAB-2 
// Write a program to find sum of arithmetic series. 

#include <stdio.h>

int main() 
{ 
    int i, n; 
    float a, d, sum = 0; 

    printf("Enter the 1st number of the series: \n"); 
    scanf("%f", &a); 

    printf("Enter the total number of terms in the series: \n"); 
    scanf("%d", &n); 

    printf("Enter the common difference: \n"); 
    scanf("%f", &d); 

    for (i = 0; i < n; i++) 
    { 
        sum = sum + a; 
        a = a + d; 
    } 

    printf("The sum of the arithmetic series is: %f\n", sum); 
    return 0; 
}

// OUTPUT   
// Enter 1st no of series: 
// 2 
//  Enter total no's in series: 
// 5 
// Enter Common Difference: 2 sum of series A.P is :30.000000 
