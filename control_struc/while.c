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
     * While Syntax
     * while(i == 5){
     *  statement;
     * }
    */

    int i = 4;
    
    // Case 1: i++ on line 23 adds a value on i but not shown in the previous print function.
    while(i == 5){
        printf("%d \n", i); // result = 5
        i++; 
    }

    // Case 2: i value is modified in line 16 
    while(i == 5){
        i++;
        printf("%d \n", i); // result = 6
    }

    printf("%d \n", i); // result = 5 if Case 2 is not executed

    // Case 3: Unending loop
    while(i != 5){
        printf("i is not equal to 5! Press ^C to end this task. \n");
    }

    // Case 4: Break keyword
    while(i != 5){
        printf("i is not equal to 5! The break keyword prevents the loop to run the task infinitely \n");
        break;
        printf("Do we have more?");
    }

    // Case 5: Continue keyword
      while(i != 5){
        printf("i is not equal to 5! Press ^C to end this task. \n");
        continue;
        printf("Do we have more?");
    }

    return 0;
}