#include<stdio.h>
#include<conio.h>
void b_sort(int a[],int n)
{
	int i,j,temp;
	//clrscr();
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void main()
{
	int a[5],i;
	//clrscr();
	printf("\n\t enter value of array..");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	b_sort(a,5);
	printf("\n\t after sorting..");
	for(i=0;i<5;i++)
	{
		printf("\n\t %d",a[i]);
		
	}
	getch();
}
