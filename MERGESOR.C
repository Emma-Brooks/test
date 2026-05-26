#include<stdio.h>
#include<conio.h>
void s_sort(int a[],int s)
{
	int i,j,t;
	for(i=0;i<5;i++)
	{
	for(j=i;j<5;j++)
	{
	if(a[i]>a[j])
	{
	t=a[i];
	a[i]=a[j];
	a[j]=t;
	}
	}
	}
}
void m_sort(int a[],int n,int b[],int m,int c[])
{
	int i=0,j=0,k=0,x;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
		c[k]=a[i];
		i++;
		k++;
		}
		else if(a[i]>b[j])
		{
		c[k]=b[j];
		j++;
		k++;
		}
		else
		{
		c[k++]=a[i++];
		c[k++]=b[j++];
		}
	}
	if(i<n)
	{
		for(x=i;x<=n-1;x++)
		{
		c[k]=b[i];
		i++;
		k++;
		}
	}
	if(j<m)
	{
		for(x=j;x<=m-1;x++)
		{
		c[k]=b[j];
		j++;
		k++;
		}
	}
}
void main()
{
	int a[5],b[5],c[10],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("\n Enter 1st array=");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Enter 2nd array=");
		scanf("%d",&b[i]);
	}
	s_sort(a,5);
	s_sort(b,5);
	m_sort(a,5,b,5,c);
	printf("\n After sorting");
	for(i=0;i<10;i++)
	{
		printf("\n %d",c[i]);
	}
	getch();
}
