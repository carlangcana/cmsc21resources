/****
 * Author: Carl Angelo G. Angcana
 * 
 * Date: Jul 20, 2023
 * 
 * Program Title: Swaping strings in C
*/

#include <stdio.h>
#include <string.h>

void swap(char * arr1, char * arr2){
    char temp[100];
    int i;
    for(i = 0; i <= strlen(arr1); i++){
        temp[i] = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp[i];
    }
}

int main(){
    char arr1[100];
    char arr2[100];
    char temp; // Serves as the buffer variable
    
    printf("Enter 1st plain text:");
    scanf("%[^\n]", arr1);
    scanf("%c", &temp); // Sets the buffer available for use 
    
    printf("Enter 2st plain text:");
    scanf("%[^\n]", arr2);
    
    swap(arr1, arr2);

    printf("Result1: %s\n", arr1);
    printf("Result2: %s\n", arr2);
    return 0;
}
    