#include<stdio.h>
#include<conio.h>

#define size 10

int f1,r1,f2,r2,q[size];

// Function of insert

void add()
{
	if(f1<0 && r2>0)
	{
		f1++;
	}
	if((r2-r1)>=2)
	{
		r1++;
		printf("\n enter the no =");
		scanf("%d",&q[r1]);
	}
	else
	{
		printf("\n queue is overflow");
	}
}

// Function of delete

void dele()
{
	if(f1==-1)
	{
		printf("\n queue is empty");
	}
	else
	{
		printf("\n element is deleted q[%d]=%d",f1,q[f1]);
		f1++;
	}

}

// Function of display

void disp()
{
	int i;
	if(f1==-1)
	{
		printf("\n queue is empty");
	}
	else
	{
		for(i=f1;i<=r1;i++)
		{
			printf("\n q[%d]=%d",i,q[i]);
		}
	}
}

// Function of insert (right side)

void insert()
{
	if(f2==size && r1<size-1)
	{
		f2--;
	}
	if((r2-r1)>=2)
	{
		r2--;
		printf("\n enter the no = ");
		scanf("%d",&q[r2]);
	}
	else
	{
		printf("\n queue is overflow");
	}
}

// Function of delete(right side)

void dele1()
{
	if(f2==size)
	{
		printf("queue is empty");
	}
	else
	{
		printf("\n element is deleted q[%d]",f2,q[f2]);
		f2--;
	}
}

// Function of display(right side)

void disp1()
{
	int i;
	if(f2==size)
	{
		printf("\n queue is empty");
	}
	else
	{
		for(i=f2; i>=r2; i--)
		{
			printf("\n q[%d]=%d",i,q[i]);
		}
	}
}

// Function of main

int main()
{
	int ch;
	f1=r1=-1;
	f2=r2=size;
	//clrscr();

	do
	{
		printf("\n === MENU ===");
		printf("\n ==1=> INSERT LEFT");
		printf("\n ==2=> DELETE LEFT");
		printf("\n ==3=> DISPLAY");
		printf("\n ==4=> INSERT RIGHT");
		printf("\n ==5=> DELETE RIGHT");
		printf("\n ==6=> DISPLAY1");
		printf("\n ==7=> EXIT");

		printf("\n Enter Your Choice=");		
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			add();
			break;

			case 2:
			dele();
			break;

			case 3:
			disp();
			break;

			case 4:
			insert();
			break;

			case 5:
			dele1();
			break;

			case 6:
			disp1();
			break;
		}
	}while(ch>=1 && ch<=6);

	printf("\n EXIT");
return 0;
	getch();
}