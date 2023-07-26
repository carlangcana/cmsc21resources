/****
 * Created by Carl Angelo G. Angcana
 * 
 * Topic: Implementation of Multidimensional Arrays in structures of C
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

struct places{
    char state[2][30];
    char countries[30];
};

int main(){
    struct places territory;
    strcpy(territory.state[0], "Vatican");
    strcpy(territory.state[1], "San Marino");
    strcpy(territory.countries, "Italy");

    printf("The enclaved states in Italy are: \n");
    printf("%s\n", territory.state[0]);
    printf("%s\n", territory.state[1]);
    return 0;
}

