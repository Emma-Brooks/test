//BUBBLE sort 
#include<stdio.h>
#include<conio.h>
void bsort(int a[],int n)
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
void main()
{
int a[5],i;
clrscr();
for(i=0;i<5;i++)
{
printf("\n\n\t enter value");
scanf("%d",&a[i]);
}
bsort(a,5);
printf("\n\n\t After sorting");
for(i=0;i<5;i++)
{
printf("\n\t\t%d",a[i]);
}
getch();
}
