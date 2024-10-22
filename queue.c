#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX],front=-1,rear=-1;
void enqueue()
{
	int elem;
	if(rear==MAX-1){
		printf("Queue Overflow!cannot Enqueue more elements\n");
		return;
	}
	printf("Enter element to be enqueued : ");
	scanf("%d",&elem);
	if(front==-1){
		front=0;
	}
	rear++;
	queue[rear]=elem;
	printf("%d Enqueued to the queue\n",elem);
}
void dequeue()
{
	if(front==-1||front>rear){
		printf("Queue Underflow!No elements to dequeue\n");
		return;
	}
	printf("Dequeued element : %d\n",queue[front]);
	front++;
	if(front>rear){
		front=rear=-1;
	}
}
void display()
{
	int i;
	if(front==-1){
		printf("Queue is empty\n");
		return;
	}
	printf("Queue elements are :");
	for(i=front;i<=rear;i++){
		printf("%d\t",queue[i]);
	}
	printf("\n");
}
int main()
{
	int ch;
	while(1){
		printf("\n---Queue Menu---\n[1]Enqueue\n[2]Dequeue\n[3]Display\n[4]Exit\n");
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
			default:printf("Invalid Choice,Please try again\n");
		}
	}
	return 0;
}
	
