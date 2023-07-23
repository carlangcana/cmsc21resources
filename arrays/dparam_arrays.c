/***
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Dynamic Multidimensional Parameter passing of Arrays in C
 * 
 * July 24, 2023  
*/

#include <stdio.h>
#include <stdlib.h>

void grid(int ** number, int key);

int main(){
    int key = 5, col = 5, row = 5;
    int ** number;
    number = (int**) malloc(sizeof(int*)*row);
    for(int i = 0; i < 5; i++){
        number[i] = (int*) malloc(sizeof(int*)*col);
    }
    grid(number, key);
    return 0;
}

void grid(int ** number, int key){
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j ++){
            if(i == 0){
                number[i][j] = j + 1;
            }else if(i == 4){
                number[i][j] = key - j;
            }else if(j == 0){
                number[i][j] = i + 1;
            }else if(j == 4){
                number[i][j] = key - i;
            }
            else{
                number[i][j] = 0;
            }
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }
}