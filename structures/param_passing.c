/****
 * Created by: Carl Angelo G. Angcana
 * 
 * Topic: Passing structures as parameters in functions in C  
 * 
 * Date: Jul 27, 2023
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

struct places{
    char state[2][30];
    char countries[30];
};


void show_all_val(struct places territory); // Pass By Value
void show_all_ref(struct places *territory); // Pass By Reference

int main(){
    struct places territory;
    show_all_val(territory); // Pass By Value
    show_all_ref(&territory); // Pass By Reference

    return 0;
}

void show_all_val(struct places territory){
    strcpy(territory.state[0], "Vatican");
    strcpy(territory.state[1], "San Marino");
    strcpy(territory.countries, "Italy");

    printf("The enclaved states in Italy are: \n");
    printf("%s\n", territory.state[0]);
    printf("%s\n", territory.state[1]);
};

void show_all_ref(struct places *territory){
    strcpy(territory->state[0], "Vatican");
    strcpy(territory->state[1], "San Marino");
    strcpy(territory->countries, "Italy");

    printf("The enclaved states in Italy are: \n");
    printf("%s\n", territory->state[0]);
    printf("%s\n", territory->state[1]);
};
