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
    int *p;
    p = (int *) malloc(sizeof(int)); 
    *p = 3;
    printf("Enter replacement of %d: ", *p);
    scanf("%d", p);
    printf("Replacement: %d\n", *p);
    free(p);
    return 0;
}