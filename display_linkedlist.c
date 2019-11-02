#include <stdio.h>
#include <stdlib.h>
#define MIN_INT -32768
struct node 
{
int data;
struct node *next;
};

struct node * create (int arr[], int n)
{
struct node *head=(struct node *)malloc(sizeof(struct node));
head->data=arr[0];
head->next=NULL;
struct node *last=head;
for (int i=1;i<=n;i++)
{
struct node *current= (struct node *)malloc(sizeof(struct node));
current->data= arr[i];
last->next=current;
last=current; 
}
return head;
}

void display(struct node *current)
{
while (current->next)
{
	printf("%d", current->data);
	current=current->next;
}

}

void RecursiveDisplay(struct node *p)
{
if (p->next!=NULL)
{
	printf("%d", p->data);
	RecursiveDisplay(p->next);
}
}


void ReverseRecursiveDisplay(struct node *current)
{
if (current->next!=NULL)
{
	ReverseRecursiveDisplay(current->next);
	printf("%d", current->data);
}
}
int countNodes(struct node *current)
{int count=0;
while (current->next!=NULL)
{
	count++;
	current=current->next;
}
return count;
}

int recursiveCount(struct node *current)
{
if (current->next==NULL)
return 0;
else 
return recursiveCount(current->next)+1;
}

int sumOfElements(struct node *current)
{
int sum=0;
while (current->next)
{
sum+=current->data;
current=current->next;
}
return sum;
}

int recursiveSumOfElements(struct node * current)
{
if (current->next==NULL)
return 0;
else
return recursiveSumOfElements(current->next)+ current->data;
}

int maximumElement(struct node * current)
{
int max=MIN_INT;
while (current->next!=NULL)
{
	if (current->data>max)
		max=current->data;
	current=current->next;
}
return max;
}

void searching(struct node *current, int key)
{
while (current->next!=NULL)
{
if (current->data==key)
	{
		printf("Searched element %d found!\n", key);
		return;
	}
current=current->next;
}
printf("Searched element %d not found in the linked list\n", key);
return;
}

void recursiveSearch(struct node *current, int key)
{
if (current->next==NULL)
	{
	printf("Searched element %d not found in the linked list\n", key);
	return;
	}
if (current->data==key)
	{
	printf("Searched element %d found in the linked list\n", key);
	return;
	}
return recursiveSearch(current->next, key);
}


void insertion(struct node *current, int position, int value)
{
struct node *temp=(struct node *)malloc(sizeof(struct node));
struct node *p=(struct node *)malloc(sizeof(struct node));
temp = current;
temp->next=NULL;
if (position==0)
{
temp->data=value;
temp->next=current;
current=temp;

// current;
}
else if (position > 0)
{

temp=(struct node *)malloc(sizeof(struct node));
temp=current;
for (int i=0;i<position-1 && temp!=NULL; i++)
{
temp=temp->next;
}
if (temp!=NULL)
{
p=(struct node *)malloc(sizeof(struct node));
p->data=value;
p->next=temp->next;
temp->next=p;
//return current;
}
}
}

int
main (int argc, char *argv[])
{
	int arr[]={1,2,3,4,5};
	struct node* head= create(arr, 5);
	struct node*current=head;
	display(head);
	printf("\n");
	RecursiveDisplay(head);
	printf("\n");
	ReverseRecursiveDisplay(head);
	printf("\n");
	printf("Count= %d\n", countNodes(head));
	printf("Recursive Count=%d\n", recursiveCount(head));
	printf("The sum of elements of the Linked List=%d\n", sumOfElements(head));
	printf("The recursive sum of elements of the Linked List=%d\n", recursiveSumOfElements(head));
	printf("The maximum element of the linked list=%d\n", maximumElement(head));
	int key;
	printf("Enter the element to be searched \n");
	scanf("%d", &key);
	searching(head, key);
	printf("\n");
	recursiveSearch(head, key);
	printf("Input the position you want to insert the node into the linked list\n");
	int position;
	scanf("%d", &position);
	printf("Input the value that you want to insert into the node\n");
	int value;
	scanf("%d", &value);
	//insertion(head, position, value);
	printf("Value at head%d\n", head->data);
	printf("Value at next of head%d\n", head->next->data);
	//RecursiveDisplay(current);
	//display(head);
	
	return 0;
}


