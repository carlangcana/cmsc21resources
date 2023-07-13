/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Recursion in C
 * 
 * July 13, 2023
*/

#include <stdio.h>

int recursive(int n);

int main(){
    int n;
    
    printf("Enter a positive integer");
    scanf("%d", &n);

    printf("%d \n", recursive(n));
    return 0;
}

int recursive(int n){
    if(n == 0){ // Base Case
        return n;
    }else{
        // printf("%d\n", n);
        return (recursive(n - 1) + n); // recursive case
    }
}

/***

Summation Formula
S(n) = 1 + 2 + 3 +  ... (n - 1) + n
S(n) = S(n-1) + n


// (n-1) penultimate term or second-to-the-last term

"Since we are able to represent the problem using itself but with a different parameter, 
we are now defining the problem as a recursive problem.
The simplest subproblem is the case where we know the exact answer to the problem. 
In this case, we know that the summation of 1 is 1 since
nothing will be added to it (i.e., S(1) = 1)."

*/