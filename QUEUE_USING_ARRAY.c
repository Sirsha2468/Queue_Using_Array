#include<stdio.h>
#include<stdlib.h>
#define MAX 10
void enqueue();
void dqueue();

int queuearray[MAX];
int rear=-1;
int front=-1;

main()
{
	int choice;
	while(1)
	{
	printf("\n1.Insert element to queue:\n2.Delete element from queue:\n4.Quit\n\nEnter your choice:");
		scanf("%d",&choice);
		
		switch(choice)
{
	case 1:
		enqueue()
		break;
		case 2:
		dqueue();	
			case 4:
				exit(1);
				default:
				printf("\nWrong Choice.");
}
	}	
}
void enqueue()
{
	int additem;
	if(rear==MAX-1)
	printf("\nQueue Overflow");
	else
	{
		if(front==-1)
		front=0;
		printf("\nInsert the element in the queue:");
		scanf("%d",&additem);
		rear=rear+1;
		queuearray[rear]=additem;
	}
}
void dqueue()
{
	if(front==-1||front > rear)
	{
		printf("\nThe queue is empty");
		return;
	}
	else
	{
	printf("\nThe element deleted from the queue is:%d",queuearray[front]);
	front=front+1;
}
}
