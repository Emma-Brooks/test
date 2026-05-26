//selection sort
#include<stdio.h>
#include<conio.h>
void sort(int a[],int n)
{
int i,j,temp;
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
clrscr();
for(i=0;i<5;i++)
{
printf("\n\n\t enter value");
scanf("%d",&a[i]);
}
sort(a,5);
printf("\n\n\t After sorting");
for(i=0;i<5;i++)
{
printf("\n\t\t%d",a[i]);
}
getch();
}
