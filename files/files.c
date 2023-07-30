/***
 * Created by Carl Angelo G. Angcana
 * 
 * Topic: Files in C
 * 
 * Date: Jul 27, 2023
*/

#include <stdio.h>

int main(){
    FILE *fp;
    /*
    In C programming, a file pointer is a special variable 
    used to keep track of the current position within a file.
    */
    fp = fopen("folder/data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n"); return 1;
    }
    fclose(fp);
    fp = NULL;
    return 0;
}