/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Arrays and Strings in C
 * 
 * Date: July 21, 2023
*/

/* 
Take Note: In C, String Literals are enclosed with double quotes "". They
           represent an array of characters.
*/

#include <stdio.h>

int main(){
    int number[5] = {1, 2, 3, 4, 5};
    number[0] = 12;
    printf("%d", number[1]);
}