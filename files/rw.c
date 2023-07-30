#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("folder/countries.txt", "r+");
    if (fp == NULL) {
        printf("Error opening file.\n"); return 1;
    }
    
    char read[100];
    fscanf(fp, "%[^\n]s", read);
    
    printf("%s\n", read);

    fprintf(fp, "\nRepublic of the Philippines");


    fclose(fp);
    fp = NULL;
}