// LAB-10 
// Write a program to sort given array using merge sort technique 


#include <stdio.h>

int a[30]; // Global array to store merged subarrays

void merge_sort(int arr[], int f, int l);
void merge(int arr[], int low, int mid, int high);

int main() {
    int arr[30], i, n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("\nBefore sorting, elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    merge_sort(arr, 0, n - 1);
    
    printf("\nAfter sorting, elements are: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}

void merge_sort(int arr[], int f, int l) {
    int mid;
    
    if (f < l) {
        mid = (f + l) / 2;
        merge_sort(arr, f, mid); // Sort left half
        merge_sort(arr, mid + 1, l); // Sort right half
        merge(arr, f, mid, l); // Merge sorted halves
    }
}

void merge(int arr[], int low, int mid, int high) {
    int l1, l2, i;
    
    for (l1 = low, l2 = mid + 1, i = low; l1 <= mid && l2 <= high; i++) {
        if (arr[l1] <= arr[l2])
            a[i] = arr[l1++];
        else
            a[i] = arr[l2++];
    }
    
    while (l1 <= mid)
        a[i++] = arr[l1++];
    
    while (l2 <= high)
        a[i++] = arr[l2++];
    
    for (i = low; i <= high; i++)
        arr[i] = a[i];
}


// OUTPUT 
// Enter no of elements5 
// Enter 5 value1 6 3 8 5 
// Before sorting elements are1 6 3 8 5 
// After sorting elements are1 3 5 6 8 
