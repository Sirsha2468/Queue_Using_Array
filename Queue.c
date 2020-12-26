#include<stdio.h>
#define LIMIT 10
int QUEUE[LIMIT];
int front=-1,rear=-1;

int enqueue(int n);
int dqueue();

void main()
{
	int data,choice;
	
	do
{
	printf("\n\tQueue Using Array\n\t1.Insert\n\t2.Delete\n\t3.Exit\n\tEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n\tEnter element to queue:");
		scanf("%d",&data);
		break;
		case 2:printf("\n\tDeleted element in te queue is:%d",dqueue());
		break;
		case 3:break;
		default:printf("Enter Correct choice:");
	}

}
	while(choice!=3);
}
int enqueue(int n)
{
	if(rear==LIMIT-1)
	{
		
	printf("\n\tQueue is full!");
	return 1;
	}
	else
rear++;
QUEUE[rear]=n;
}
int dqueue(int *n)
{
	if(front == rear && front!=1 && rear!=-1)
	{
		printf("\n\tQueue is empty!");
		return 1;
	}
	else
	front++;
	n = QUEUE[front];
	return 0;
}
