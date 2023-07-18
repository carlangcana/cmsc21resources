/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Parameter Passing in C
 * 
 * July 19, 2023
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez.
*/

#include <stdio.h>

void getXY(int *x, int *y);
void getSum(int x, int y, int *sum);

int main () { // main function
    int x, y, sum;
    getXY(&x, &y);
    printf("The X and Y are the following values: %d, %d\n", x, y);    
    getSum(x, y, &sum);
    printf("The sum of two numbers is %d:", sum);
    return 0;
}

void getXY(int *x, int *y){
    printf("Get X: ");
    scanf("%d", x);
    printf("Get X: ");
    scanf("%d", y);
}

void getSum(int x, int y, int *sum){   
    *sum = x + y;
}