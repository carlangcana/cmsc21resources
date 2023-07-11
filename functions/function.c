/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Actual Parameter and Formal Parameters in C Functions. 
 * 
 * July 11, 2023
*/

#include <stdio.h>

// Let's dive in to the function by starting to learn how to write sfunction definitions in C. 
// Main is considered a function, it is the function that the operating system initially executes when you run the program.
// Function definition is a block of code for implementing the function per se. 
// You need to call the function in order for it to perform the behavior expected from it.

/****
 * Function definition
*/

int addNumbers(int a, int b){ // Formal Parameter
    int sum = a + b;
    return sum;
}

/***
 * Syntax for function call
 * <function_name>(<function_parameter_list>)  
*/

int main(){
    int a, b;
    
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    
    // There are two ways to output the return value of the function call. You may directly 
    printf("The answer is: %d\n", addNumbers(a,b)); //In this case, %d expects the return value of sum.

    return 0;
}