//insertion sort
#include<stdio.h>
#include<conio.h>
void isort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j])
		{
			a[j+1]=a[j];
			if(j>=0)
				j=j-1;

			else
				break;
		}
		a[j+1]=temp;
	}
}
void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n\t enter value");
		scanf("%d",&a[i]);
	}
	isort(a,5);
	printf("\n\t after sorting");
	for(i=0;i<5;i++)
	{
		printf("\n\t\t %d",a[i]);
	}
getch();
}

