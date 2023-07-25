#include<stdio.h>


typedef struct student
{
    char firstname[30];
    char lastname[30];
    char house[30];
    int age;

    int height[2];
    float weight;
} wizard;


int main() {
	struct student harry = {"Harry", "Styles", "House of Azkaban", 12, {5,7}, 70};
    printf("\nYer e wizerd herry\n******************** \n");

    printf("Firstname: %s\n", harry.firstname);
    printf("Lastname: %s\n", harry.lastname);
    printf("House: %s\n", harry.house);
    printf("Height: %dft %din\n", harry.height[0], harry.height[1]);
    printf("Weight: %.1fkgs\n", harry.weight);
}