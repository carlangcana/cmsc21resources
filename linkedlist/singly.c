#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function to insert a new node at the tail of the linked list
void insertAtTail(Node** head, int key) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = key;
    temp->next = NULL;

    if (*head == NULL) {
        // If the linked list is empty, make the new node the head
        *head = temp;
    } else {
        // Traverse to the last node
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }

        // Insert the new node after the last node
        current->next = temp;
    }
}

void insertAtHead(Node **head, int key){
    Node *new = (Node *)malloc(sizeof(Node));
    new->data = key;
    new->next = *head;
    *head = new;
}

void deleteAtTail(Node** head) {
    if (*head == NULL) {
        printf("List is already empty.\n");
        return;
    }

    if ((*head)->next == NULL) {
        // If there is only one node in the list, delete it
        free(*head);
        *head = NULL;
        return;
    }

    Node* current = *head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    // Unlink the last node from the list
    free(current->next);
    current->next = NULL;
    printf("Last node from tail deleted.\n");
}

void deleteAtHead(Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    Node* temp = *head;
    *head = temp->next;
    free(temp);
    printf("Node at head deleted.\n");
}

void deleteAll(Node **head){
    while(*head != NULL){
        Node *temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main() {
    Node* head = NULL;

    // Creating nodes
    Node* node1 = (Node*)malloc(sizeof(Node));
    scanf("%d", &node1->data);
    node1->next = NULL;

    Node* node2 = (Node*)malloc(sizeof(Node));
    scanf("%d", &node2->data);
    node2->next = NULL;

    Node* node3 = (Node*)malloc(sizeof(Node));
    scanf("%d", &node3->data);
    node3->next = NULL;

    // Linking nodes to form a linked list
    head = node1;
    node1->next = node2;
    node2->next = node3;

    // Inserting a new node at the tail
    int new, newh;
    printf("Enter data for new node at the tail: ");
    scanf("%d", &new);
    insertAtTail(&head, new);

    printf("Enter data for new node at the head: ");
    scanf("%d", &newh);
    insertAtHead(&head, newh);

    // Printing the linked list
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");

    // printf("What would you like to delete?: ");
    // scanf("%d", &del);
    deleteAtTail(&head);
    // deleteAtHead(&head);
    // deleteAll(&head);
    // Set head to NULL after deleting all nodes
    // head = NULL;

    // Freeing memory for the nodes
    // free(node1);
    // free(node2);
    // free(node3);

    return 0;
}
