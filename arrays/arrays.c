/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Arrays in C
 * 
 * July 20, 2023
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez.
*/


// Starters
// What is an array? Arrays in C is a collection of data of a single type stored in a contiguous memory location.
// Unlike in Python where an array can store different type of data (can have string, int, float, etc. in a single 
// array) C Arrays can only store one type of data which should be specified upon declaration.

#include<stdio.h>
#include<stdlib.h>

void displayArray(int *A){
    int i;
    for(i=0; i<100; i++){
        printf("%d\n", *(A)+i);
    }
}

int main(){
    int size=3;
    int *number;
    number = (int*) malloc(sizeof(int));

    int i;
    for(i=0; i<100; i++){
        number[i] = i;
    }

    displayArray(number);
    free(number);

    return 0;
}