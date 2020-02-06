#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} *root =NULL;

//Recursively inserting into BST
struct Node* insert(struct Node* root, int key) {
    struct Node *newNode;
    if (root==NULL) {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data= key;
        newNode -> left = NULL;
        newNode ->right = NULL;
        root= newNode;
        return root;
    }
    if (key< root->data) {
        root->left = insert(root->left, key);
    }
    if (key > root->data) {
        root->right = insert(root->right, key);
    }
    return root;
}

void inOrder(struct Node *root) {
    if (root) {
    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
    }
}
int main(int argc, char const *argv[])
{
    root = insert(root, 9);
    root = insert(root, 15);
    root = insert(root, 5);
    root = insert(root, 20);
    root = insert(root, 16);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 3);
    root = insert(root, 6);
    

    
    inOrder(root);
    return 0;
}
