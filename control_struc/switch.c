/*
* Author: Carl Angelo G. Angcana
*
* Topic: Control Structures
*
* Jul 10, 2023
*/

#include <stdio.h> // Preprocessor directive

int main(){
    int a;
    scanf("%d", &a);

    switch(a){
        case 1:
            printf("You pressed one! \n");
            break;
        case 2:
            printf("You pressed two! \n");
            break;
        case 3:
            printf("You pressed three! \n");
            break;
        default:
            printf("The numbered you entered doesn't match our options! \n");
            break;
    }
}