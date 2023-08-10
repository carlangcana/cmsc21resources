#include <stdio.h>
#include <stdlib.h>

typedef struct number_tag {
    int num;   
    struct number_tag * next; // Self-referential structure
}number;

int main(){
    number num;
    number * head = &num;
    printf("%p\n", head);
}
