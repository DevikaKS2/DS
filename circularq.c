#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max],front=-1,rear=-1,count=0;
void enqueue()
{
	int elem;
	if(count==max)
	{
		printf("Circular Queue is full");
		return;
	}
	else
	{
		printf("Enter the element to be enqueued : ");
		scanf("%d",&elem);
		if(front==-1)
		{
			front=0;
		}
		rear=(rear+1)%max;
		q[rear]=elem;
		count++;
		printf("%d is enqueued to the queue\n",elem);
	}
}
void dequeue()
{
	if(count==0)
	{
		printf("Circular queue is empty,no elements to dequeue\n");
		return;
	}
	printf("Dequeued element is %d",q[front]);
	front=(front+1)%max;
	count--;
}
void display()
{
	if(count==0)
	{
		printf("Circular queue is empty,no elements to dequeue\n");
		return;
	}
	int j=front;
	printf("Queue elements are : ");
	for(int i=0;i<count;i++)
	{
		printf("%d\t",q[j]);
		j=(j+1)%max;
	}
	printf("\n");
}
void main()
{
	int ch; 
	while(1){
		printf("\n---Circular Queue Menu---\n[1]Insert\n[2]Delete\n[3]Display\n[4]Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:enqueue();
				break;
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:printf("Exited\n");
				exit(0);
			default:printf("Invalid choice!please try again\n");
		}
	}
}
