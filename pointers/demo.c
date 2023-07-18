/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Pointers: Memory Addresses, Pointer Representation, Pointer Operators, Pointer to pointers, Dynamically Allocated Variables
 * 
 * July 16, 2023
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez. This code is also used in the demonstration by Prof Lapitan.
*/

// Play with pointers in C
#include <stdio.h>

int main(){
    // variable declaration
    int x, y, *p, *q;
    float ratio, *fptr;

    x = 6; // Valid
    y = 3; // Valid
    ratio = x/(float)y; //Is this valid?
    p = &x;
    fptr = &ratio;
    y = *p;
    printf("%d = %d\n", y, *p);
    q = &y;
    p = q;
    (*p) ++;
    printf("%d = %d\n", *p, *q);
    return 0;
}