#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct circular
{
	int n;
	struct circular *next;
};
typedef struct circular node;
node *n1=NULL,*n2=NULL;
void create();
void display();
void main()
{
	int n;
	clrscr();
	while(1)
	{
		printf("\n\n\t1.........VOID CREATE()");
		printf("\n\n\t2.........VOID DISPLAY()");
		printf("\n\n\t3.........EXIT()");
		printf("\n\n\tENTER YOUR CHOICE:=");
		scanf("%d",&n);
		switch(n)
		{
		case 1:
			create();
			break;
		case 2:
			display();
			break;
		case 3:
			exit(0);
		}
	}
}
void create()
{
	char c;
	n1=(node*)malloc(sizeof(node));
	n2=n1;
	while(1)
	{
	printf("\n\n\tENTER NODE VALUE:=");
	scanf("%d",&n1->n);
	printf("\n\n\tCONTINUE........?");
	fflush(stdin);
	scanf("%c",&c);
	if(c=='y')
	{
	n1->next=(node*)malloc(sizeof(node));
	n1=n1->next;
	}
	else
	{
	n1->next=n2;
	break;
	}
	}
}
void display()
{
	printf("\n\n\tVALUE\tFIRST ADDRESS");
	for(n1=n2;n1->next!=n2;n1=n1->next)
	{
	printf("\n\n\t%d\t\t%u",n1->n,n1->next);
	}
	printf("\n\n\t%d\t\t%u",n1->n,n1->next);
}