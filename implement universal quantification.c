// LAB-1 
// Write a program to implement universal quantification 

#include <stdio.h>

int main()
{
    int A[100], i, n, allEven = 1;
    printf("ENTER THE NUMBER OF ELEMENTS IN SET A: ");
    scanf("%d", &n);

    printf("ENTER THE %d ELEMENTS: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for(i = 0; i < n; i++)
    {
        if(A[i] % 2 != 0)
        {
            allEven = 0;
            break;
        }
    }

    if(allEven)
        printf("ALL ELEMENTS OF SET A ARE EVEN. THEY ARE UNIVERSAL QUANTIFIERS.\n");
    else
        printf("SOME ELEMENTS OF SET A ARE NOT EVEN. THEY ARE NOT UNIVERSAL QUANTIFIERS.\n");

    return 0;
}

 
// OUTPUT 
//  ENTER THE NO OF ELEMENTS IN SET A=5 
 
//  ENTER THE 5 NO OF ELEMENTS=1 2 3 4 6 
// SOME ELEMENTS OF SET A ARE EVEN ARE NOT UNIVERSAL QUANTIFIERS 
