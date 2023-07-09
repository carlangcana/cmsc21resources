/*
* Author: Carl Angelo G. Angcana
*
* Topic: Control Structures
*
* Jul 10, 2023
*/

#include <stdio.h> // Preprocessor directive

int main(){
    int x = 5, y = 16, c;

    // First Part. (If)
    if(x > y){
        printf("%d is greater than %d \n", x, y);
    }
    printf("This is the end of the program \n");

    // Second Part. (If and Else)
    if(x > y){
        printf("%d is greater than %d \n", x, y);
    }else{
        printf("%d is greater than %d \n", y, x);
    }

    // Third part
    if(x > y){
        printf("%d is the highest integer! \n", x);
    }else if(x > c){
        printf("%d is the highest integer! \n", x);
    }else if(y > c){
        printf("%d is the highest integer! \n", y);
    }else{
        printf("%d is the highest integer! \n", c);
    }

    return 0;
}