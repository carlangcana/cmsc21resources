/****
 * Author: Carl Angelo G. Angcana
 * 
 * Topic: Recursion in C
 * 
 * July 13, 2023
*/

#include<stdio.h>

int main(){
// Array declaration with no initialization
int number[10];
float height[6];
char name[20];

/****
Array declaration with initialization.
Initialization is the preparation of a computer or
similar device for operation, in which diagnostic 
tests are run and the operating system is loaded.

Array Declaration with Initialization.
<data_type> <array_name> [] = {'<element_0>','<element_1>',...'<element_n>'}

Accessing an element of an array
*/

float grades[3]; // = {5.6, 4.1, 5.34}; //
int i;
int g;
float *f;

// printf("%i\n", g);

// grades[2] = 96;
// The value 96 is stored into the element 60 of the grades array;

// printf("%f\n", grades[2]);
// 

// In the loop, it will sequence through the first 3 
// elements of the array grades (element 0 to 3) and will
// print the values of each grade.
for(i=0; i<3; i++){
    printf("Enter grade in subject %d: ",i+1);
    scanf("%f", &grades[i]);
}

// Try this 3rd
// for(i=0; i<3; i+=1){
//     printf("Your grade in subject %d is: %.2f\n", i+1, grades[i]);
// }

// float *f
f=&grades[0];
printf("f = %f\n\n", *f);

// int g
/* Try this 4th */
g = grades[2];
printf("*grades = %.2f\n", *grades);
printf("*grades = %.2f\n", *(grades+1));
// Also the same as 
printf("grades[1] = %.2f\n", grades[1]);
printf("*grades = %.2f\n", *(grades+2));

// Pointer variable is a variable which stores the 
// address of another variable rather than values
}
