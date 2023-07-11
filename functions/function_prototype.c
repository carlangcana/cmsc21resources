/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Actual Parameter and Formal Parameters in C Functions. 
 * 
 * July 11, 2023
*/

#include <stdio.h>

int addNumbers(int a, int b); // Function Prototype

int main(){
    int a, b;
    
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    
    // There are two ways to output the return value of the function call. You may directly 
    printf("The answer is: %d\n", addNumbers(a,b)); //In this case, %d expects the return value of sum.
    return 0;
}

int addNumbers(int a, int b){
    int sum = a + b;
    return sum;
}