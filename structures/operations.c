/****
 * Created by Carl Angelo G. Angcana
 * 
 * Topic: Use of pointer operations in structures.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

typedef struct places{
    char cities[30];
    char countries[30];
    struct places *nextTravel;

}destinations;

int main(){
    destinations japan, korea, italy, *placePtr, vatican; 
    
    strcpy(japan.cities, "Kyoto");
    strcpy(japan.countries, "Japan");
    japan.nextTravel = NULL;

    strcpy(korea.cities, "Seoul");
    strcpy(korea.countries, "Korea");
    korea.nextTravel = &japan;

    placePtr = &italy;
    strcpy(placePtr->cities, "Rome");
    strcpy(placePtr->countries, "Italy");
    italy.nextTravel = &korea;

    vatican = *placePtr;

    printf("%s\n", japan.cities);
    printf("%s\n", placePtr->cities);
    printf("%s\n", vatican.cities);
    printf("%s\n", vatican.countries);
    printf("%s\n", korea.cities);
    printf("%s\n", korea.countries);
    printf("%s\n", korea.nextTravel->cities);
    printf("%s\n", korea.nextTravel->countries);

    destinations *current = &italy;
    printf("\nCurrent City:%s", current->cities);
    printf("\nCurrent Country:%s\n", current->countries);

   
    return 0;
}

