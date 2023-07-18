/***
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Pointers: Memory Addresses, Pointer Representation, Pointer Operators, Pointer to pointers, Dynamically Allocated Variables
 * 
 * July 16, 2023
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez
*/

#include <stdio.h>
#include "../errhandling/errno.h"
#include "../errhandling/sigsegv.h"

extern int errno;
void menu();
int case_1();
int case_2();
int case_3();
int case_4();

int main() {
    signal(SIGSEGV, segfault_handler);
    signal(SIGILL, err_handler);
    int i;
    
    do{
        menu();
        printf("Enter your choice: ");
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            case_1();
            break;   
        case 2:
            case_2();
            break;
        case 3:
            case_3();
            break;
        case 4:
            case_4();
            break;   
        default:
            break;
        }
    }while(i != 0);

    return 0;
}

int case_1(){
    int a, b, i;
    int *c = NULL, *d;

    a = 10;
    b = 12;

    printf("--------------------------------------------------\n");
    printf("\nExplanation: A pointer can point only to the data type specified in its declaration.\n");
    printf("\nint a = 10, b = 12, *c = NULL, *d \n\n");
    printf(" a = %d is the actual value of a and it is a valid statement.\n", a);
    printf(" b = %d is the actual value of b and it is a valid statement.\n\n", b);
    printf(" *c = %p is the address of c and it is a valid statement.\n", c);
    printf(" *d = %p is the address of d and it is a valid statement.\n\n", d);
    c = d;
    printf(" After writing c = d, c's address now becomes: %p.\n", c);
    printf(" After writing c = d, d's address now becomes: %p.\n\n", d);
    printf("Press [0-9] to continue");
    scanf("%d", &i);
    printf("\n--------------------------------------------------\n");
    return 0;
}

int case_2(){  
    int a, b, i;
    int *c = NULL, *d;

    printf("\n--------------------------------------------------\n");
    printf("\n Explanation: You can give a pointer “no value” by giving it the value NULL.\n If the value of a pointer is NULL, then the pointer does not point to any memory address.\n");
    printf(" The address of c is: %p.\n", c);
    printf(" The address of d is: %p.\n", d);
    printf("Press [0-9] to continue");
    scanf("%d", &i);
    printf("\n--------------------------------------------------\n");
    return 0;
    
}

int case_3(){
    int a, b, i;
    int *c = NULL, *d, *e = NULL;
    a = 123;
    c = &a;
    d = c;
    printf("\n--------------------------------------------------\n");
    printf("\n Explanation: Without an address operator, the indirection operation;\n will be semantically erroneous. It won't show an error during the compilation but, you might\n encounter a segmentation fault (core dumped) during the execution. It is because pointer\n is not pointing to any variable. This is called as uninitialized pointer error.\n\n");
    printf(" c = %d is the actual value of 'int a' passed into c (c = &a).\n", *c);
    printf(" d = %d is the actual value of 'int a' passed into d (d = c).\n\n", *d);
    printf(" *c = %p\n", c);
    printf(" *d = %p\n", d);
    printf(" *e cannot be printed as it has no actual value as it is set to null.\n\n");
    printf("%d", *e);
    printf("Press [0-9] to continue");
    scanf("%d", &i);
    printf("\n--------------------------------------------------\n");
    return 0;
}

int case_4(){
    int y, x, *o, *p = NULL;
    x = *o;
    y = *p;
    printf("%d This is the value of *o\n", x);
    printf("%d\n", y);
    return 0;
}

void menu(){
    printf("*** Menu *** \n");
    printf("[0] Exit \n");
    printf("[1] Case 1: Valid declaration for pointer and variables \n");
    printf("[2] Case 2: Declaring NULL values to a pointer \n");
    printf("[3] Case 3: Proper placing an operator \n");
    printf("[4] Case 4: Uninitialized pointer\n");
}
