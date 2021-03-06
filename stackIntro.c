#include <stdio.h>
#include <stdlib.h>

struct stack {
int size;
int top;
int *stackArray;
};

void push(struct stack *s, int number ) {

if (s->top==s->size-1) {
printf("Stack Overflow\n");
}
else {
s->top+=1;
s->stackArray[s->top]=number;
}
}

int pop( struct stack *s) {

int x;
if (s->top==-1) {
printf("Stack Underflow\n");
}
else {
x= s->stackArray[s->top];
s->top-=1;
}
return x;
}


int peek (struct stack *s, int position ) {
int x=-1;
if (s->top-position-1 < 0) {
printf("Invalid position\n");
}
else {
x=s->stackArray[s->top-position-1];
}
return x;
}

int stackTop ( struct stack *s ) {
if (s->top == -1) {
return -1;
}
return s->stackArray[s->top];
}


int isEmpty ( struct stack * s) {
if (s->top==-1) {
	return 1;
}
	return 0;
}

int isFull ( struct stack *s ) {
if (s->top == s->size -1 ) {
	return 1;
}
	return 0;
}





int
main (int argc, char *argv[])
{
	struct stack s;
	printf("Enter the size of the stackArray\n");
	scanf("%d", &s.size);
	s.stackArray= (int *)malloc(s.size*sizeof(struct stack));
	s.top=-1;
	
	for (int i=0; i<s.size; i++) {
	printf("Enter the element to insert into stack \n");
	int n;
	scanf("%d", &n);
	push (&s, n);
	}
	
	printf("The top element of the stack : %d ", stackTop(&s));
	printf("\n");
	
	printf("Enter the position of the element that you want from the stack\n");
	int position;
	scanf("%d", &position);
	printf("The element in position %d of the stack is : %d", position,peek(&s, position));
	
	int removedElement;
	printf("\n");
	removedElement=pop(&s);
	printf("The element that has been removed from the stack is %d: \n", removedElement);
	printf("Now the topmost element of the stack is : %d \n", stackTop(&s));
	printf("\n");
	
	if (isEmpty(&s)) {
		printf("The stack is empty !!!\n");
	} else {
		printf("The stack isnt empty !!!\n");
		
	}
	
	if (isFull(&s)) {
		printf("The stack is full!!!\n");
	} else {
		printf("The stack isnt full\n");
	}
	
	return 0;
}

