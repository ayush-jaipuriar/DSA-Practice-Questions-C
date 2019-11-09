#include <stdio.h>
#include <stdlib.h>
struct queue {
int size;
int front;
int rear;
int *Q;
};

void enqueue( struct queue *q, int number) {
	if (q->rear==q->size-1) {
		printf("Error: Queue Overflow\n");
	}
	else {
		q->rear++;
		q->Q[q->rear]= number;
	}
}

int dequeue ( struct queue *q ) {
	int x;
	if (q->front==q->rear) {
		printf("Error: String is empty\n");
	}
	else {
		q->front++;
		 x= q->Q[q->front];
		 return x;
		
	}
	return -1;
}


void printQueue (struct queue *q) {
	for (int i=0; i<q->size; i++) {
		printf("%d ", q->Q[i]);
	}
}

int
main (int argc, char *argv[])
{	int number;
	int deletedElement;
	struct queue q;
	printf("Enter the number of elements in the array\n");
	scanf("%d", &q.size);
	q.Q=(int *)malloc(q.size * sizeof(int ));
	q.front=-1;
	q.rear=-1;
	printf("Enter the elements into the queue\n");
	for (int i=0; i<q.size; i++) {
		scanf("%d", &number);
		enqueue(&q,number);
	}
	
	printQueue(&q);
	
	for (int i=0; i<q.size; i++) {
	
		deletedElement= dequeue(&q);
		(deletedElement==-1)? printf("Error: Queue contains no elements\n") : printf("Element deleted from the Queue : %d\n", deletedElement);
	}
	
	return 0;
}


