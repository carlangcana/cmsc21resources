/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Recursion in C
 * 
 * July 13, 2023
*/

#include <stdio.h>
#include <unistd.h> 

void countdown(int n);

int main() {
    int n;

    printf("Enter seconds: ");
    scanf("%d", &n);

    printf("Countdown:\n");
    countdown(n);
    
    return 0;
}

void countdown(int n) {

    if(n == 10){
        printf("%d seconds left\n", n);
    }else if(n == 5){
        printf("%d seconds left\n", n);
    }else if(n == 0){
        printf("Times up! \n");
        return;
    }

    sleep(1);
    countdown(n - 1);
}
