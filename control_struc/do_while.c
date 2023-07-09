/*
* Author: Carl Angelo G. Angcana
*
* Topic: Control Structures
*
* Jul 10, 2023
*/

#include <stdio.h> // Preprocessor directive

/****
 * Do-while syntax
 * do{
 *  statement;
 * }while(condition);
*/

int main() {
    int c = 0;

    do { // Executes the loop body before checking the condition. This will ensure that the loop body will execute at least once regardless of the condition.
        printf("Count: %d\n", c);
        c++;
    } while (c <= 5);

    return 0;
}
