/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Parameter Passing in C
 * 
 * July 19, 2023
*/

#include <stdio.h>

void getSum(int *x, int *y, int *sum);

int main () { // main function
    int x, y, sum;
    getSum(&x, &y, &sum);
    printf("The X and Y are the following values: %d, %d. And the sum of two values is: %d\n", x, y, sum);    
    return 0;
}

void getSum(int *x, int *y, int *sum){
    printf("Get X: ");
    scanf("%d", x);
    printf("Get X: ");
    scanf("%d", y);
    *sum = *x + *y;
}