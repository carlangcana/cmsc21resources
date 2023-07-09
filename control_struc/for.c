/*
* Author: Carl Angelo G. Angcana
*
* Topic: Control Structures
*
* Jul 10, 2023
*/

#include <stdio.h> // Preprocessor directive

int main(){
    /****
     * For Syntax
     * for(initialization;condition;variable_update){
     *  statement;
     * }
    */

    int c, i;
    printf("Enter a number: ");
    scanf("%d", &c);
    for(i = 1; i <= c; i++){
        printf("Count: %d \n", i);
    }
    return 0;

}