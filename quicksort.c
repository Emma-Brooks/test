#include<stdio.h>
#include<conio.h>
void q_sort(int a[],int f,int l)
{
	int low,high,p,temp;
	//clrscr();
	low=f;
	high=l;
	p=a[(f+l)/2];
	while(low<=high)
	{
		while(a[low]<p)
		{
			low=low+1;
		}
		while(a[high]>p)
		{
			high=high-1;
		}
	if(low<=high)
			{
				temp=a[low];
				a[low]=a[high];
				a[high]=temp;
				low=low+1;
				high=high-1;
			}
	}
		if(low<l)
		{
			q_sort(a,low,l);
		}
		if(f<high)
		{
			q_sort(a,f,high);
		}
}
void main()
{
	int a[5],i,f=0,l=4;
	//clrscr();
	printf("\n\t enter value of array..");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	q_sort(a,f,l);
	printf("\n\t after sorting..");
	for(i=0;i<5;i++)
	{
		printf("\n\t %d",a[i]);
		
	}
	getch();
}
