/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Pointers: Memory Addresses, Pointer Representation, Pointer Operators, Pointer to pointers, Dynamically Allocated Variables
 * 
 * July 16, 2023
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, s;
    int *ptr = (int *) malloc(5 * sizeof(int));
    
    printf("Sum of 5 numbers\n");

    for(i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%d", ptr+i);
    }

    for(i = 0; i < 5; i++){
        s += *(ptr+i);
    }

    printf("Answer: %d\n", s);
    free(ptr);
    ptr = NULL;
    return 0;
}

/***
 * Key takeaways:
 * 1. Always write the correct expression:
 *    - s = s + ptr+i is not the same as s += *(ptr+i)
 * 2. Always release the dynamically allocated memory because it is our responsibility.
*/