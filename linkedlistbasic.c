#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;

void push(node **head,int value)
{
node *current=malloc(sizeof(node));
current->data=value;

current->next=(*head);
(*head)=current;
printf("%d\n",current->data);
}

int
main (int argc, char *argv[])
{
	node *head=malloc(sizeof(node));
	
	head->data=1;
	
	printf("%d\n",head->data);
	
	push(&head,2);
	printf("%d\n",head->data);
}


