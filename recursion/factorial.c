#include <stdio.h>

long long factorial(int n);

int main(){
    int n;

    printf("Enter a positive integer: ");
    scanf("%i", &n);

    printf("%llu \n", factorial(n));
    return 0;
}

long long factorial(int n) {
    if(n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}