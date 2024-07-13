// LAB-9 
// Write a Program to search an element using Binary search technique.  


#include <stdio.h>

int binarySearch(int array[], int n, int search) {
    int first = 0, last = n - 1, middle;
    
    while (first <= last) {
        middle = (first + last) / 2;
        
        if (array[middle] == search)
            return middle; // Element found, return index
        
        if (array[middle] < search)
            first = middle + 1; // Search in the right half
        else
            last = middle - 1; // Search in the left half
    }
    
    return -1; // Element not found
}

int main() {
    int n, search, result;
    int array[100];
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d integers in sorted order:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);
    
    printf("Enter value to find: ");
    scanf("%d", &search);
    
    result = binarySearch(array, n, search);
    
    if (result != -1)
        printf("%d found at location %d.\n", search, result + 1);
    else
        printf("Not found! %d is not present in the list.\n", search);
    
    return 0;
}



// OUTPUT
// Enter number of elements: 5
// Enter 5 integers in sorted order:
// 3 5 7 9 11
// Enter value to find: 5
// 5 found at location 2