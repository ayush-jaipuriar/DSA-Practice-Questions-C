#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} *root=NULL;

void insert(int key) {
    struct Node *newNode, *tailer;
    if (root==NULL) {
        newNode=(struct Node *)malloc(sizeof(struct Node));
        newNode->left = NULL;
        newNode->right = NULL;
        newNode->data= key;
        root= newNode;
    } else {
        newNode= root;
        tailer = NULL;
        while (newNode != NULL) {
        tailer = newNode;
        if (key == newNode ->data) {
            return;
        }
        if (key < newNode->data) {
            newNode = newNode -> left;
        } else {
            newNode = newNode -> right;
        }
    }
    struct Node *tempNode = (struct Node * )malloc(sizeof(struct Node));
    if (key<tailer->data) {
         tailer->left = tempNode;
         tempNode ->data = key;
         tempNode ->left = NULL;
         tempNode ->right = NULL;
         return ;
    } else if (key > tailer->data) {
        tailer -> right = tempNode;
        tempNode -> data = key;
        tempNode ->left = NULL;
        tempNode -> right = NULL;
    }

    }
    
}

void inOrder(struct Node *root) {
    if (root) {
        inOrder(root-> left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}
int main(int argc, char const *argv[])
{
    insert(9);
    insert(15);
    insert(5);
    insert(20);
    insert(16);
    insert(8);
    insert(12);
    insert(3);
    insert(6);
    inOrder(root);
    
    return 0;
}
