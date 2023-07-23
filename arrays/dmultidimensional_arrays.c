/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Dynamic Multidimensional Arrays in C
 * 
 * July 24, 2023  
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int key = 5, col = 5, row = 5;
    int ** number;

    number = (int **) malloc(sizeof(int*)*row);

    for (int i = 0; i < row ; i++){
        number[i] = (int *) malloc(sizeof(int*)*col);
    }

    for (int i = 0; i < key; i++) {
        for (int j = 0; j < key; j++) { 
            if(i == 0){
                number[i][j] = j + 1;    
            }else if(j == 0){
                number[i][j] = i + 1;
            }else if(j == 4){
                number[i][j] = key - i;
            }else if(i == 4){
                number[i][j] = key - j;
            }
            else{
                number[i][j] = 0;
            }
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < row; i++){
        free(number[i]);
    }free(number);

    return 0;
}
