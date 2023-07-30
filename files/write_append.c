/***
 * Created by Carl Angelo G. Angcana
 * 
 * Topic: Files in C
 * 
 * Date: Jul 27, 2023
*/

#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char italy[] = "Republic of Italy";
    char korea[] = "Republic of Korea";
    int length = strlen(italy);
    
    fp = fopen("folder/destination.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n"); return 1;
    }else{
        for(int i=0; i < length; i++){
            fputc(italy[i], fp);
        }
        fputc('\n', fp);
    }
    fclose(fp);

    fp = fopen("folder/destination.txt", "a");
    fprintf(fp, "%s\n", korea);

    fclose(fp);
    // fp = NULL;
    return 0;
}