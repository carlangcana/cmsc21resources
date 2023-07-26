/****
 * Created by Carl Angelo G. Angcana
 * 
 * Topic: Structures definitions of C
 * 
 * Date: Jul 27, 2023
*/

#include<stdio.h>
#include <string.h>

#define MAX_STUDENTS 4

struct abilities{
    char skill1[30];
    char skill2[30];
    char skill3[30];
};

typedef struct student
{
    char firstname[30];
    char lastname[30];
    char house[30];
    int age;

    int height[2];
    float weight;
    int powerlevel;
    struct abilities skill;
} wizard;


int main() {
	struct student harry = {"Harry", "Styles", "Azkaban", 12, {5,7}, 70, 90};
    struct student ron = harry;
    struct student hermione, malfoy;
    wizard enrolled[MAX_STUDENTS];
    char buffer;

    printf("\nYer e wizerd herry\n******************** \n");

    printf("Firstname: %s\n", harry.firstname);
    printf("Lastname: %s\n", harry.lastname);
    printf("House: %s\n", harry.house);
    printf("Height: %dft %din\n", harry.height[0], harry.height[1]);
    printf("Weight: %.1fkgs\n", harry.weight);
    printf("Power Level: %d\n", harry.powerlevel);

    printf("\nYer e wizerd won\n******************** \n");
    
    strcpy(ron.firstname, "Ron");
    strcpy(ron.lastname, "Monron");
    ron.height[0] = 6;
    ron.height[1] = 2;
    ron.weight = 75;
    ron.powerlevel = 80;
    
    printf("Firstname: %s\n", ron.firstname);
    printf("Lastname: %s\n", ron.lastname);
    printf("House: %s\n", ron.house);
    printf("Height: %dft %din\n", ron.height[0], ron.height[1]);
    printf("Weight: %.1fkgs\n", ron.weight);
    printf("Power Level: %d\n", ron.powerlevel);

    printf("\nYer e wizerd hermainy \n******************** \n");

    strcpy(hermione.firstname, "Hermione");
    strcpy(hermione.lastname, ron.lastname);
    strcpy(hermione.house, ron.house);
    hermione.height[0] = 5;
    hermione.height[1] = 8;
    hermione.weight = 65;
    
    // Arithmetic Operations in Structure. Hermione's powerlevel is the average level of Harry and Ron's power.
    hermione.powerlevel = (harry.powerlevel + ron.powerlevel) / 2;
    // Arithemtic 

    printf("Firstname: %s\n", hermione.firstname);
    printf("Lastname: %s\n", hermione.lastname);
    printf("House: %s\n", hermione.house);
    printf("Height: %dft %din\n", hermione.height[0], hermione.height[1]);
    printf("Weight: %.1fkgs\n", hermione.weight);
    printf("Powerlevel: %d\n", hermione.powerlevel);

    int size1 = sizeof(harry);
    int size2 = sizeof(ron);
    int size3 = sizeof(hermione);

    printf("\nThe sizes of spaces occupied by of each student: \n");

    printf("Harry: %d\n", size1);
    printf("Ron: %d\n", size2);
    printf("Hermione: %d\n", size2);

    printf("\nAdd a new wizerd: \n");
    printf("\nName: ");
    scanf("%s", malfoy.firstname);
    printf("Lastname: ");
    scanf("%s", malfoy.lastname);
    printf("House: ");
    scanf("%s", malfoy.house);
    printf("Height (ft): ");
    scanf("%d", &malfoy.height[0]);
    printf("Height (in): ");
    scanf("%d", &malfoy.height[1]);
    printf("Weight: ");
    scanf("%f", &malfoy.weight);
    printf("Powerlevel: ");
    scanf("%d", &malfoy.powerlevel);
    printf("Skill1: ");
    scanf("%s", malfoy.skill.skill1);
    printf("Skill2: ");
    scanf("%s", malfoy.skill.skill2);
    printf("Skill3: ");
    scanf("%s", malfoy.skill.skill3);

    printf("\nYer e wizerd melfoy\n******************** \n"); 
    
    printf("Firstname: %s\n", malfoy.firstname);
    printf("Lastname: %s\n", malfoy.lastname);
    printf("House: %s\n", malfoy.house);
    printf("Height: %dft %din\n", malfoy.height[0], malfoy.height[1]);
    printf("Weight: %.1fkgs\n", malfoy.weight);
    printf("Power Level: %d\n", malfoy.powerlevel);
    printf("1st Skill: %s\n", malfoy.skill.skill1);
    printf("2nd Skill: %s\n", malfoy.skill.skill2);
    printf("3rd Skill: %s\n", malfoy.skill.skill3);

    printf("\nList of wizerdz\n******************** \n"); 

    enrolled[0] = harry;
    enrolled[1] = ron;
    enrolled[2] = hermione;
    enrolled[3] = malfoy;
    
    printf("Student 1: %s %s\n", enrolled[0].firstname, enrolled[0].lastname);
    printf("Student 2: %s %s\n", enrolled[1].firstname, enrolled[1].lastname);
    printf("Student 3: %s %s\n", enrolled[2].firstname, enrolled[2].lastname);
    printf("Student 4: %s %s\n", enrolled[3].firstname, enrolled[3].lastname);

    printf("\n");

    return 0; 
}  