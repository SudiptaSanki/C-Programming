#include <stdio.h>
#include <stdlib.h>

// Definition of a Singly Linked List Node
struct Node {
    int data;
    struct Node* next;
};

// Function to print the entire linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(void) {
    printf("--- Singly Linked List Demo ---\n\n");

    // Dynamic memory allocation for 3 nodes
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    // Assign data and link the nodes
    head->data = 10;
    head->next = second; // Link head to second node

    second->data = 20;
    second->next = third; // Link second to third node

    third->data = 30;
    third->next = NULL; // Mark the end of the list

    // Traverse and print
    printf("The Linked List: ");
    printList(head);

    // Free memory before exiting to avoid memory leaks
    free(head);
    free(second);
    free(third);

    return 0;
}
