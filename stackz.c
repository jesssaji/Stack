//STACK

#include<stdio.h>
#include<stdlib.h>
#define n 5
int top = -1;
int stack[n];
int isfull();
int isempty();


void push(int val)
{
	if(isfull())
	{
		printf("\nOverFlow\n\n");
	}
	else
	{
		top ++;
		stack[top] = val;
		printf("\n%d pushed\n\n",stack[top]);
	}
}

void pop()
{
	if(isempty())
	{
		printf("\nUnderflow\n\n");
	}
	else
	{
		printf("\n%d Popped\n\n",stack[top]);
		stack[top]=-1;
		top--;
	}
}

int isfull()
{
	if(top==n-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isempty()
{
	if(top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void findtop()
{
	printf("\nTop Position = %d\n\n",top);
	printf("\nTop value = %d\n\n",stack[top]);
}

void display()
{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
		printf("\n | %d |",stack[i]);
	}
	printf("\n  ____\n\n"); 
}

void main()
{
	printf("\n\n\tNAMASTE");
	while (1)
	{
		int ch,entry;
		printf("\n\n\t1.PUSH\n\t2.POP\n\t3.FIND TOP\n\t4.DISPLAY\n\t5.EXIT\n\n\tEnter your choice:");
		scanf("%d",&ch);
	
		switch(ch)
		{
			case 1:{
					printf("\nEnter element to be pushed ");
					scanf("%d",&entry);
					push(entry);
					break;
					}
			case 2:{
					pop();
					break;
				   }
			case 3:{
					findtop();
					break;
				   }
			case 4:{
					display();
					break;
				   }
			case 5 :{
					 printf("\n\tThank you, visit again!!\n\n");
					 exit(0);
					 }
					 
	  }
 }
}

