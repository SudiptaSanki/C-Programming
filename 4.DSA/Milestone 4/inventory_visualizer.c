#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Milestone 4: Warehouse Inventory Management using Linked Lists

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
    struct Item* next;
};

// Insert a new item into the Linked List, keeping it SORTED by ID
struct Item* insertSorted(struct Item* head, int id, const char* name, int quantity, float price) {
    struct Item* newItem = (struct Item*)malloc(sizeof(struct Item));
    newItem->id = id;
    strcpy(newItem->name, name);
    newItem->quantity = quantity;
    newItem->price = price;
    newItem->next = NULL;

    // Empty list or new item belongs at the head
    if (head == NULL || head->id >= newItem->id) {
        newItem->next = head;
        return newItem;
    }

    // Traverse to find the correct sorted position
    struct Item* current = head;
    while (current->next != NULL && current->next->id < newItem->id) {
        current = current->next;
    }
    
    newItem->next = current->next;
    current->next = newItem;
    
    return head;
}

void printInventory(struct Item* head) {
    printf("\n=== Current Warehouse Inventory ===\n");
    printf("%-5s | %-15s | %-8s | %-8s\n", "ID", "Product Name", "Qty", "Price");
    printf("------------------------------------------------\n");
    struct Item* curr = head;
    while (curr != NULL) {
        printf("%-5d | %-15s | %-8d | $%-7.2f\n", curr->id, curr->name, curr->quantity, curr->price);
        curr = curr->next;
    }
}

int main(void) {
    struct Item* inventory = NULL;

    printf("Putting Items into Database (They will auto-sort by ID)...\n");
    
    inventory = insertSorted(inventory, 105, "Wireless Mouse", 50, 24.99);
    inventory = insertSorted(inventory, 101, "Mechanical Keybd", 20, 89.50);
    inventory = insertSorted(inventory, 108, "USB-C Hub", 100, 15.00);
    inventory = insertSorted(inventory, 103, "Monitor Stand", 15, 35.99);

    printInventory(inventory);
    
    // Future expansion: Add Binary Search over a converted array, or Merge Sort for Price!
    
    return 0;
}
