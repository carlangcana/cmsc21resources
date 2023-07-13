/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Recursion in C
 * 
 * July 13, 2023
*/


// Arithmetic sequence is an ordered set of numbers that have a common difference between each consecutive term

#include<stdio.h>

void arithmetic_sequence(int a, int b, int n);

int main(){
    int a, b, n;

    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common difference: ");
    scanf("%d", &b);
    printf("Enter the n term: ");
    scanf("%d", &n);

    arithmetic_sequence(a, b, n);
    return 0;
}

void arithmetic_sequence(int a, int b, int n) {
    if(n == 0){
        return;
    }else{
        a = a + b;
        printf("%d \n", a);
        arithmetic_sequence(a, b, (n - 1));
    }
}
