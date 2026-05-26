#include<stdio.h>
#include<conio.h>
void l_search(int a[],int size,int n)
{
	int i,flag=0;
	for(i=0;i<5;i++)
	{
		if (a[i]==n)
		{
			printf("\n\t record is found");
			flag=1;
		}
	}
	if (flag==0)
	{
		printf("\n\t record is not found");
	}
}
int main()
{
	int a[5],i,no;
	//clrscr();
	printf("\n\t enter value of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\t enter value which you want to found");
	scanf("%d",&no);
	l_search(a,5,no);
	return 0;
	getch();
}
