/****
 * Author: Carl Angelo G. Angcana
 * 
 * Date: Jul 20, 2023
 * 
 * Program Title: Multiplication Table in C
 * 
 * Case Source: CS 21 Fundamentals of Programming - UPLB by KBP Pelaez.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int ** array;
    int rowsize = 10, colsize = 10, i, j, mult[10][10];

    array = (int **) malloc(sizeof(int *) * rowsize);
    for(i = 1; i<rowsize; i++){
        array[i] = (int *) malloc(sizeof(int) * colsize);
    }

    for(i = 1; i<rowsize; i++){
        for(j = 1; j<colsize; j++){
            mult[i][j] = i * j;
            printf("%5d", mult[i][j]);
        }
        printf("\n");
    }

    for(i = 1; i<rowsize; i++){
        free(array[i]);
    }

    free(array);
    return 0;
}