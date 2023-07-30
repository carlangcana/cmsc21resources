#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("folder/countries.txt", "r");
    char read[100];
    
    /*** Example No. 1: fscanf() **/

    fscanf(fp, "%[^\n]s", read);
    printf("%s\n", read);

    fscanf(fp, "%*c"); // The * in "%*c" means to read and ignore the character
    fscanf(fp, "%[^\n]", read);
    printf("%s\n", read);

    fscanf(fp, "%*c"); // The * in "%*c" means to read and ignore the character
    fscanf(fp, "%[^\n]", read);
    printf("%s\n", read);

    /*** Example No. 2: fgetc() **/

    for(int i=0; i<sizeof(read); i++){
        read[i] = fgetc(fp);
        if (read[i] == EOF) { // Check for end of file
            break;
        }else{
            printf("%c", read[i]);
        }
    }
    printf("\n");

    /*** Example No. 3: fgets() **/

    char * result = fgets(read, sizeof(read), fp);
    if(result != NULL){
        printf("%s", read);
        // printf("%s",fgets(read, sizeof(read), fp));
        printf("%s",fgets(read, sizeof(read), fp));
        printf("%s",fgets(read, sizeof(read), fp));
    }printf("\n");

    fclose(fp);

    return 0;

}