#include<stdio.h>
#include<conio.h>
#define size 10

int value,i,tos=-1,s[size];

void push()
{
	if(tos>=size-1)
	{
		printf("\n stack is overflow");
	}
	else
	{
		tos=tos+1;
		printf("\n enter value that you want to insert..");
		scanf("%d",&s[tos]);
	}
}
void pop()
{
	if(tos==-1)
	{
		printf("\n\t stack is empty you can't delete'");
	}
	else
	{
		value=s[tos];
		tos=tos-1;
		printf("\n\t deleted element is %d",value);
	}
}
void peep()
{
	if(tos==-1)
	{
		printf("\n\t stack is empty");
	}
	else
	{
		printf("\n\t enter element that you want to view");
		scanf("%d",&i);
		printf("\n\t peep element is %d",s[i]);
	}
}
void update()
{
	printf("\n\t enter value that you want to upadate");
	scanf("%d",&value);
	for(i=0;i<=tos;i++)
	{
		if(s[i]==value)
		{
			printf("\n\t enter new value");
			scanf("%d",&s[i]);
		}
		/*else
		{
			printf("\n\t value not found");
		}*/
	}
}
void display()
{
	if(tos==-1)
	{
	printf("\n\t stack is empty");	
	}
	else
	{
		printf("\n\t stack is as follow..");
		for(i=tos;i>=0;i--)
		{
			printf("\n\t %d",s[i]);
		}
	}
}
void main()
{
	int ch;
	//clrscr();
	do
	{
		printf("\n\t.......Menu....");
		printf("\n\t 1== push");
		printf("\n\t 2== pop");
		printf("\n\t 3== peep");
		printf("\n\t 4== update");
		printf("\n\t 5== display");
		printf("\n\t 6== exit");
		printf("\n\t enter your choice..");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			peep();
			break;
			case 4:
			update();
			break;
			case 5:
			display();
			break;
		}
	}while(ch>=1 && ch<=5);
	printf("\n\t exit");
	getch();
}
