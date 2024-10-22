#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node* link;
};
struct Node* start=NULL;
struct Node* getnode()
{
	int item;
	printf("Enter the value to insert : ");
	scanf("%d",&item);
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=item;
	new_node->link=NULL;
	return new_node;
}
void enqueue()
{
	struct Node* new_node=getnode();
	if(start==NULL)
	{
		start=new_node;
	}
	else
	{
		struct Node* ptr=start;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=new_node;
	}
	printf("%d is enqueued\n",new_node->data);
}
int dequeue()
{
	if(start==NULL)
	{
		printf("Queue is empty,nothing to delete\n");
		return 0;
	}
	else
	{
		struct Node* ptr=start;
		start=start->link;
		free(ptr);
		return 1;
	}
}
void traverse()
{
	if(start==NULL)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("Queue elements are :");
		struct Node* ptr=start;
		while(ptr!=NULL)
		{
			printf("->%d",ptr->data);
			ptr=ptr->link;
		}
	}
}
void freeList()
{
	while(start!=NULL)
	{
		dequeue();
	}
}
void main()
{
	int ch;
	while(1){
		printf("\n---Queue  Menu---\n[1]Enqueue\n[2]Dequeue\n[3]Traverse\n[4]Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:enqueue();
				break;
			case 2:dequeue();
				printf("Front item dequeued\n");
				break;
			case 3:traverse();
				break;
			case 4:freeList();
				printf("Exited\n");
				exit(0);
			default:printf("Invalid choice!please try again\n");
		}
	}
}	
