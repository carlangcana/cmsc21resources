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

    // names[Max_Names][Max_Name_length]
    char names[3][10] = {"John", "Emmanuel", "Jules"};
    int i;
    for (i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }
    return 0;

}