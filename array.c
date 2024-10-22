#include<stdio.h>
#include<stdlib.h>
int a[30],n,i;
void create()
{
	printf("Enter the limit :");
	scanf("%d",&n);
	printf("Enter the element of the array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void insert()
{
	int item,l;
	printf("Enter the location of element to be inserted :");
	scanf("%d",&l);
	printf("Enter he element to be inserted :");
	scanf("%d",&item);
	if(l<0||l>n)
	{
		printf("Invalid Location\n");
	}
	else
	{
		for(i=n;i>=l;i--)
		{
			a[i+1]=a[i];
		}
		a[l]=item;
		n++;
		printf("%d inserted at index %d",item,l);
	}
}
void delete()
{
	int l;
	if(n==0)
	{
		printf("Array is empty\n");
	}
	printf("Enter the location ,to delete :");
	scanf("%d",&l);
	if(l<0||l>n)
	{
		printf("Invalid Location\n");
	}
	else
	{
		for(i=l;i<n;i++)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("Element deleted\n");
	}
}
void display()
{
	if(n==0)
	{
		printf("Array is empty\n");
	}
	printf("Array is :");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void main()
{
	int ch;
	create();
	while(1){
		printf("\n---Array Menu---\n[1]Insert\n[2]Delete\n[3]Display\n[4]Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert();
				break;
			case 2:delete();
				break;
			case 3:display();
				break;
			case 4:printf("Exited\n");
				exit(0);
			default:printf("Invalid choice!please try again\n");
		}
	}
}
