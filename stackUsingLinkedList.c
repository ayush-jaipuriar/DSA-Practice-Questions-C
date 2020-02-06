#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};

struct Node* push(struct Node *top, int data) {
    struct Node *newNode= (struct Node *)malloc(sizeof(struct Node));
    newNode ->data  = data;
    if (top == NULL) {
        newNode->next = NULL;
    } else {
        newNode->next = top;
        top = newNode;
        
    }
    return newNode;
}
int display(struct Node *top) {
    if (top==NULL) {
        printf("Stack underflow");
    } else {
    struct Node *tempNode = top;
    while (tempNode->next!=NULL) {
        printf("%d ", tempNode->data);
        tempNode = tempNode ->next;

    }
    //printf("%d---->NULL", tempNode->data);
    }
}

struct Node* pop(struct Node *top) {
    if (top==NULL) {
        printf("Stack Underflow");
    } else {
        struct Node *temp = top;
        int x= temp->data;
        top = top->next;
        
        printf("Removed Element : %d", x);
    }
    return top;
}

int peak (struct Node *top) {
    if (top==NULL) {
        printf("Stack is empty");
    } else {
        
        return top->data;
        
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    struct Node *top =(struct Node *)malloc(sizeof(struct Node));
    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    display(top);
    top = pop(top);
    top = pop(top);
    printf("The element on the top:    %d", peak(top));

    
    

    
    

    return 0;
}

