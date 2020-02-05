#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* newNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}

void preOrder(struct Node *node) {
    
    if (node) {
        printf("%d ", node->data);
        preOrder(node->left);
        preOrder(node->right);
    }
}

int countNodes(struct Node *node) {
    int x,y;
    if (node) {
        x = countNodes(node->left);
        y = countNodes(node->right);
        return x+y+1;
    }
    return 0;
}
int main() {
    struct Node *root = newNode(1);
      root->left = newNode(2);
      root->right  = newNode(3);
      root->left->left = newNode(4);
      root->left->right = newNode(5);
      root->left->left->left = newNode(6);
      preOrder(root);
      printf("Number of nodes in the given binary tree : %d", countNodes(root));
    return 0;
}