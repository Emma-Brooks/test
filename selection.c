#include<stdio.h>
#include<conio.h>
void s_sort(int a[],int n)
{
	int i,j,temp;
	//clrscr();
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
	s_sort(a,5);
	printf("\n\t after sorting..");
	for(i=0;i<5;i++)
	{
		printf("\n\t %d",a[i]);
		
	}
	getch();
}
