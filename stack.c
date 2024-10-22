#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int stack[MAX],top=-1;
void push(){
	int elem;
	if(top==MAX-1){
		printf("Stack overflow,can't push more elements\n");
		return;
	}
	printf("Enter the element to be pushed : ");
	scanf("%d",&elem);
	top++;
	stack[top]=elem;
	printf("%d pushed to the stack\n",elem);
}
void pop(){
	if(top==-1){
		printf("Stack underflow,can't perform deletion\n");
		return;
	}
	printf("Popped element is: %d\n",stack[top]);
	top--;
}
void display(){
	int i;
	 if(top==-1){
	 	printf("Stack is empty");
	 	return;
	 }
	 printf("stack elements are\n");
	 for(i=top;i>=0;i--){
	 	printf("%d\n",stack[i]);
	 }	
}
void main(){
	int ch;
	while(1){
		printf("---STACK MENU---\n[1]PUSH\n[2]POP\n[3]DISPLAY\n[4]EXIT\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:printf("Exited\n");
				exit(0);
			default:printf("invalid choice ,please try again");
		}
	}
}
