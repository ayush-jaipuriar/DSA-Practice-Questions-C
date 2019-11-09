#include <stdio.h>
#include <stdlib.h>
struct queue {
int size;
int front;
int rear;
int *Q;
};

void enqueue(struct queue *q, int inputElement) {
	if ((q->rear+1)%q->size==q->front) {
		printf("Error : Queue Overflow \n");
	}
	else {
	
		q->rear = (q->rear + 1)%q->size ;
		q->Q[q->rear] = inputElement;
	}
}

void printQueue ( struct queue *q) {

	for (int i=0; i<q->size; i++) {
		printf("%d ", q->Q[i]);
	}
}

int deQueue ( struct queue *q ) {
	int deletedElement;
	if (q->front == q->rear) {
		printf("Error : The queue is empty\n");
		return -1;
		
	}
	else {
		q->front = (q->front + 1)%q->size ;
		deletedElement = q->Q[q->front];
		return deletedElement;
	}
}

int
main (int argc, char *argv[])
{
	struct queue q;
	printf("Enter the size of the queue \n");
	scanf("%d", &q.size);
	q.Q= (int *)malloc(q.size * sizeof(int));
	q.front=-1;
	q.rear=-1;
	int inputElement;
	printf("Enter the element of the queue\n");
	for (int i=0; i<q.size; i++) {
		scanf("%d", &inputElement);
		enqueue(&q, inputElement);
	}
	
	printf("Printing the element of the queue\n");
	printQueue(&q);
	
	printf("Deleting the elements from the circular queue\n");
	for (int i=0; i<q.size; i++) {
		int deletedElement;
		deletedElement = deQueue ( &q);
		printf("The deleted element from the queue : %d\n", deletedElement);
	}
	
	return 0;
}


