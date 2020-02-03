#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *leftChild;
    struct Node *rightChild;
};

void preOrder(struct Node *node) {
    if (node) {
    printf("%d ", node -> data);
    preOrder(node->leftChild);
    preOrder(node ->rightChild);
    }
}

void inOrder(struct Node *node) {
    if (node) {
        inOrder(node->leftChild);
        printf("%d ", node->data);
        inOrder(node->rightChild);
        
    }
}

void postOrder(struct Node *node) {
    if (node) {
        postOrder(node->leftChild);
        postOrder(node->rightChild);
        printf("%d ", node->data);
    }
}



struct Node* newNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data= data;
    newNode -> leftChild = NULL;
    newNode ->rightChild = NULL;
    return (newNode);
}





int main(int argc, char const *argv[]) {
    struct Node *root = newNode(1);
    root -> leftChild = newNode(2);
    root -> rightChild = newNode (3);
    root -> leftChild -> leftChild = newNode(4);
    root ->leftChild ->rightChild = newNode(5);
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);


    return 0;
}
