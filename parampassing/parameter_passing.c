/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Parameter Passing in C
 * 
 * July 19, 2023
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez.
*/

// Initial notes: There are two types of parameters namely actual and formal parameters.
// Actual Parameters - Passed through function call
// Formal Parameters - Received from function call

#include <stdio.h>

int sum1(int a, int b);
void sum2(int *a, int *b);

int main(){
    int a = 5, b = 10;
    printf("Output of pass by value: %d\n", sum1(a, b));
    sum2(&a, &b);
    return 0;
}

int sum1(int a, int b){
    return a+b;
}

void sum2(int *a, int *b){
    printf("Output of pass by reference: %d\n", *a + *b);
}