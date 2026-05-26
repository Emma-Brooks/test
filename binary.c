#include<stdio.h>
#include<conio.h>
void b_sort(int a[],int n)
{
	int i,j,temp;
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
void binary(int a[],int n,int no)
{
	int low=0,high=n-1,f=0,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(no==a[mid])
		{
			f=mid+1;
			break;
		}
		else if(no<a[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(f)
	{
		printf("\n\t search is success at location %d",f);
	}
	else
	{
			printf("\n\t search is not success");
	}
}
void main()
{
	int a[5],i,no;
	//clrscr();
	printf("\n\t enter value of array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	b_sort(a,5);
	printf("\n\t after sorting");
	for(i=0;i<5;i++)
	{
		printf("\n\t %d",a[i]);
	}
	printf("\n\t enter value do you want to search");
	scanf("%d",&no);
	binary(a,5,no);
	getch();
}

