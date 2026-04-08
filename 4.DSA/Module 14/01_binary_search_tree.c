#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Helper function to create a new tree node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// In-Order Traversal (Left, Root, Right) - Prints BST in sorted order!
void inorderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main(void) {
    printf("--- Binary Search Tree (BST) Demo ---\n\n");
    
    /* 
       Let's manually build this BST:
              50
            /    \
          30      70
         /  \    /  \
       20   40  60   80
    */
    
    struct TreeNode* root = createNode(50);
    root->left = createNode(30);
    root->right = createNode(70);
    
    root->left->left = createNode(20);
    root->left->right = createNode(40);
    
    root->right->left = createNode(60);
    root->right->right = createNode(80);

    // If it's a valid BST, an in-order traversal will ALWAYS print in ascending order
    printf("In-Order Traversal (Should be sorted): \n");
    inorderTraversal(root);
    printf("\n");

    return 0;
}
