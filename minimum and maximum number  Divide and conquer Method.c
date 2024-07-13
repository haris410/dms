// LAB-11 
// Write a program to find the minimum and maximum number in a set of N number using Divide and conquer Method.  


#include <stdio.h>

int max, min;
int a[100];

void maxmin(int i, int j) {
    int mid, max1, min1;

    if (i == j) {
        max = min = a[i]; // Base case: Array has one element
    } else if (i == j - 1) {
        // Array has two elements
        if (a[i] < a[j]) {
            max = a[j];
            min = a[i];
        } else {
            max = a[i];
            min = a[j];
        }
    } else {
        // Array has more than two elements, divide and conquer
        mid = (i + j) / 2;
        maxmin(i, mid); // Recursively find max and min in left half
        max1 = max;
        min1 = min;
        maxmin(mid + 1, j); // Recursively find max and min in right half
        if (max < max1)
            max = max1;
        if (min > min1)
            min = min1;
    }
}

int main() {
    int i, n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Initialize max and min to the first element
    max = a[0];
    min = a[0];
    
    // Call the function to find max and min
    maxmin(0, n - 1);
    
    printf("Minimum element in the array: %d\n", min);
    printf("Maximum element in the array: %d\n", max);
    
    return 0;
}

// OUTPUT 
// Enter the number of elements: 4 
// Enter 4 numbers: 1 9 5 3 
// Minimum element in the array: 1 
// Maximum element in the array: 9 
