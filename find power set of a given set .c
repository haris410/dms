// LAB-5 
// Write a Program to find power set of a given set 


#include<stdio.h>
#include<math.h>

void printpowerset(char* set, int set_size) 
{ 
    int pow_set_size = pow(2, set_size); 
    int i, j; 
    
    // Loop through all subsets
    for (i = 0; i < pow_set_size; i++) 
    { 
        printf("{ "); 
        
        // Check every element of set
        for (j = 0; j < set_size; j++) 
        { 
            // Check if jth bit in the i is set. If set, then print jth element from set
            if (i & (1 << j)) 
                printf("%c ", set[j]); 
        } 
        
        printf("}\n"); 
    } 
} 

int main() 
{ 
    char set[] = {'a', 'b', 'c'}; 
    
    // Calculate and print power set
    printpowerset(set, 3); 
    
    return 0; 
}
