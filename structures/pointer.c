#include <stdio.h>

struct Node {
    int data;
    struct Node* next; // Pointer to the same structure type (self-referential)
};

int main(){
    struct Node first_data = {1};
    struct Node second_data = {2};
    struct Node * pointed_to_first_data;
    pointed_to_first_data = &first_data;
    printf("%d\n", first_data.data);
    printf("%d\n", second_data.data);
    printf("%d\n", pointed_to_first_data->data);
    return 0;
}

// Sample Only