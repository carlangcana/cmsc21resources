/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Pointers: Memory Addresses, Pointer Representation, Pointer Operators, Pointer to pointers, Dynamically Allocated Variables
 * 
 * July 16, 2023
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez.
*/

#include <stdio.h>

int main(){

int i = 3, j = 4, k = 7;
int *ip1, *ip2, **ipp;

// ip1 = &1;                    Invalid. 1 is not a valid descriptive variable name.
ip2 = &j;                   //  Valid. Result would be 4;
ipp = &ip1;                 //  Valid.
ip1 = &k;                   //  Valid. It updates the value of **ipp
// ip2 = &ipp;                  Invalid.
// ipp = &k;                    Invalid.
// printf("%d\n", *ipp);        Invalid. 
// printf("%d\n", ip2);         Invalid. It should be printf("%d\n", *ip2) // 4 ; or printf("%p\n", ip2) // Address Number;
printf("%d\n", *ip1);       //  Valid.
ip1 = *ipp;
*ipp = ip2;
// ip2 = &ip1;              // Invalid. Same level pointer need no address operator.
return 0;
}

/***
 * Key takeaways:
 * 1. Same level pointer need no address operator for assignment
 * 2. When you include indirection operator, it will output the value of the pointer variable.
 * 3. Assigning integer variables to a pointer variable would need address operator. 
*/