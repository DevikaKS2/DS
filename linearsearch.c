#include<stdio.h>
void main()
{
	int a[30],n,i,item,flag=0;
	printf("Enter the array limit :");
	scanf("%d",&n);
	printf("Array elements are :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the search item :");
	scanf("%d",&item);
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			printf("%d present at %d\n",item,i);
			flag=1;
		}
	}
	if(flag==-1)
	{
		printf("Item not found\n");
	}
}
