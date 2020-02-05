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
    newNode ->left = NULL;
    newNode ->right = NULL;
    return newNode;
}

void preOrder(struct Node *node) {
    if (node) {
        printf("%d ", node->data);
        preOrder(node->left);
        preOrder(node->right);
    }
}

int countLeafNodes(struct Node *node) {
    int x, y;
    if (node) {
        x= countLeafNodes(node->left);
        y= countLeafNodes(node->right);
        if (node->left!=NULL || node->right!=NULL) {
            return x+y+1;
        } else {
            return x+y;
        }
    }
    return 0;
}

int main(int argc, char const *argv[])
{
      struct Node *root = newNode(1);
      root->left = newNode(2);
      root->right  = newNode(3);
      root->left->left = newNode(4);
      root->left->right = newNode(5);
      root->left->right->right = newNode(8);
      root->left->left->left = newNode(6);
      preOrder(root);
      printf("Number of Non leaf Nodes : %d", countLeafNodes(root));
    return 0;
}
