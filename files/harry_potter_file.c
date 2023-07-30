#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX_STUDENTS 5

typedef struct student
{
    char firstname[30];
    char lastname[30];
} wizard;

void menu();
int add(struct student * freshman, int *index);
void delete(struct student *freshman, int *index);
void view(struct student * freshman, int index);
void save(struct student * freshman, int index);

int main() {
    struct student *freshman = malloc(MAX_STUDENTS * sizeof(struct student));
    int i;
    int index = 0;

    while(i != 0){
        menu();
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            add(freshman, &index);
            break;
        case 2:
            delete(freshman, &index);
            break;
        case 3:
            view(freshman, index);
            break;
        case 4:
            save(freshman, index);
            break;
        default:
            break;
        }
    }
    return 0;
}  

void menu(){
    printf("[0] Exit\n");
    printf("[1] Add a wizard\n");
    printf("[2] Delete a wizard\n");
    printf("[3] View all wizard\n");
    printf("[4] Save progress\n");
    printf("Select an option ...");
}

int add(struct student * freshman, int * index){
    if (*index >= MAX_STUDENTS) {
        printf("The wizard list is full. Cannot add more wizards.\n");
        return *index;
    }

    printf("Name: ");
    scanf("%s", freshman[*index].firstname);
    printf("Lastname: ");
    scanf("%s", freshman[*index].lastname);
    (*index)++;
    return *index;
}

void delete(struct student *freshman, int *index) {
    if (*index == 0) {
        printf("No wizards to delete. The wizard list is empty.\n");
        return;
    }

    printf("Enter the index number of the wizard to delete (1 to %d): ", *index);
    int deleteIndex;
    scanf("%d", &deleteIndex);

    if (deleteIndex >= 1 && deleteIndex <= *index) {
        // Found the wizard to delete, now shift remaining elements to fill the gap
        for (int i = deleteIndex - 1; i < *index - 1; i++) {
            freshman[i] = freshman[i + 1];
        }
        (*index)--;
        printf("Wizard at index %d has been deleted.\n", deleteIndex);
    } else {
        printf("Invalid index. No wizard deleted.\n");
    }
}

void view(struct student * freshman, int index){
    printf("\n");
    for(int i = 0; i < index; i++){
        printf("Wizard %d: %s %s\n", i+1, freshman[i].firstname, freshman[i].lastname);
    }
    printf("\n");
}

void save(struct student *freshman, int index){
    FILE * fp = fopen("folder/students.txt", "w");
    fprintf(fp, "%d\n", index);
    for(int i = 0; i < index; i++){
        fprintf(fp, "%d %s %s\n", i+1, freshman[i].firstname, freshman[i].lastname);
    }
    fclose(fp);
}
