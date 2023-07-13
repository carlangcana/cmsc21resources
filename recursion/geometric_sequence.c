/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Recursion in C
 * 
 * July 13, 2023
*/

#include<stdio.h>

void geometric_sequence(int a, int b, int n);

int main(){
    int a, b, n;

    printf("Enter the first term: ");
    scanf("%d", &a);
    printf("Enter the common ratio: ");
    scanf("%d", &b);
    printf("Enter the n term: ");
    scanf("%d", &n);

    geometric_sequence(a, b, n);
    return 0;
}

void geometric_sequence(int a, int b, int n) {
    if(n == 0){
        return;
    }else{
        a = a * b;
        printf("%d\n", a);
        geometric_sequence(a, b, (n - 1));
    }
}
