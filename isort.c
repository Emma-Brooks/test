#include<stdio.h>
#include<conio.h>
void i_sort(int a[],int n)
{
	int i,j,temp;
	//clrscr();
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(temp<a[j])
		{
			a[j+1]=a[j];
			if(j>=0)
			{
				j=j-1;
			}
			else
			{
				break;
			}
		}
		a[j+1]=temp;
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
	i_sort(a,5);
	printf("\n\t after sorting..");
	for(i=0;i<5;i++)
	{
		printf("\n\t %d",a[i]);
		
	}
	getch();
}
