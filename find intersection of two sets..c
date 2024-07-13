// LAB-4 
// Program to find intersection of two sets. 


#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
    int a[100], b[100], c[100], n1, n2, i, j, k = 0; 
    
    // Input elements of set A
    printf("Enter number of elements of set A: ");     
    scanf("%d", &n1); 

    printf("Enter %d elements of set A: ", n1); 
    for (i = 0; i < n1; i++)         
        scanf("%d", &a[i]); 
    
    // Input elements of set B
    printf("Enter number of elements of set B: ");     
    scanf("%d", &n2); 

    printf("Enter %d elements of set B: ", n2); 
    for (i = 0; i < n2; i++)         
        scanf("%d", &b[i]);     

    // Find intersection
    for (i = 0; i < n1; i++) 
    { 
        for (j = 0; j < n2; j++) 
        {             
            if (a[i] == b[j]) 
            {                 
                c[k] = a[i];                 
                k++;                 
                break; 
            } 
        } 
    } 
    
    
    printf("\nIntersection of set A and B is: "); 
    for (i = 0; i < k; i++)     
        printf("%d ", c[i]); 
    
    return 0; 
}

// OUTPUT 
// Enter number of elements of set A: 5
// Enter 5 elements of set A: 1 2 3 4 5
// Enter number of elements of set B: 3
// Enter 3 elements of set B: 1 3 5

// Intersection of set A and B is: 1 3 5
