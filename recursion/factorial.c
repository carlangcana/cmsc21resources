#include <stdio.h>

unsigned long long factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(){
    int n;

    printf("Enter a positive integer: ");
    scanf("%i", &n);

    printf("%llu \n", factorial(n));
    return 0;
}