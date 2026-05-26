#include<stdio.h>
#include<conio.h>
#define size 5
int front=-1,rear=-1,q[size];
void insert()
{
	if(rear<size-1)
	{
		printf("\n enter a value..");
		scanf("%d",&q[++rear]);
		if (front==-1)
		front=front+1;
	}
	else
	{
	printf("\n\t queue is full..");
	}
}
void dele()
{
	if(front==-1)
	{
		printf("\n\t queue is empty..");
	}
	else
	{
		printf("\n\t element is delete %d",q[front]);
	}
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=front+1;
	}
}
void display()
{
	int i;
	if(front==-1)
	{
	printf("\n\t queue is empty");	
	}
	else
	{
		printf("\n\t queue is as follow..");
		for(i=front;i<=rear;i++)
		{
			printf("\n\t %d",q[i]);
		}
	}
}
void main()
{
	int ch;
	clrscr();
	do
	{
		printf("\n\t.......Menu....");
		printf("\n\t 1== insert");
		printf("\n\t 2== delete");
		printf("\n\t 3== display");
		printf("\n\t 4== exit");
		printf("\n\t enter your choice..");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert();
			break;
			case 2:
			dele();
			break;
			case 3:
			display();
			break;
		}
	}while(ch>=1 && ch<=5);
	printf("\n\t exit");
	getch();
}
