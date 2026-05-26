#include<stdio.h>
#include<conio.h>
#include<alloc.h>
int i,choice;
struct doubly
{
  int no;
  struct doubly *next,*pre;
}start,*node,*new;
void in_first()
{
printf("\n inserting as a first node");
node=(struct doubly*)malloc(sizeof(struct doubly));
node->pre=&start;
node->next=node->pre->next;
printf("\n enter a value");
scanf("%d",&node->no);
node->pre->next=node;
//node->next->pre=node;
}


void in_last()
{
  node=&start;
  while(node->next)
  {
   node=node->next;
  }
  node->next=(struct doubly*)malloc(sizeof(struct doubly));
   node->next->next=NULL;
  printf("\ninserting as a last node");
  printf("\n enter a value");
  scanf("%d",&node->next->no);
  node->next->pre=node;
}
void del_first()
{
  node=start.next;
  if(node==NULL)
  {
   printf("\n empty");
  }
  else
  {
  node->pre->next=node->next;
  node->next->pre=node->pre;
  free(node);
  }
}
void del_last()
{
 node=start.next;
 if(node==NULL)
 {
  printf("\nempty");
 }
 else
 {
   while(node->next)
   {
	 node=node->next;
   }
   node->pre->next=NULL;
   free(node->next);

 }
}
void display()
{
node=start.next;
while(node)
{
printf("\n%d",node->no);
node=node->next;
}
getch();
}
void search()
{
 int f=0,s=1,num;
 printf("\n input the value u want to serch");
 scanf("%d",&num);
 node=start.next;
 if(node==NULL)
 {
 printf("\n empty");
 }
 else
 {
  while(node)
  {
   if(node->no==num)
   {
	printf("\nserch is success");
	printf("\nlocation is %d",s);
		f=1;
		break;
	}
	else
	{
	 node=node->next;
	 s++;
	}

  }
 }
 if(f==0)
 printf("\n search is un sucess");
}


void main()
{
 char ch;
 int choice;
 clrscr();
 node=&start;
 start.next=NULL;
 start.pre=NULL;
 do
 {
 clrscr();
 printf("\n******menue*******");
 printf("\n------1=insert as a first");
 printf("\n------2=insert as alast");
 printf("\n------3=delete as a first");
 printf("\n------4=delete as last");
 printf("\n------5=display");
 printf("\n------6=search");
 printf("\n------7=exit");
 printf("\n enter your choice");
 scanf("%d",&choice);
 switch(choice)
 {
 case 1:
 in_first();
  break;
 case 2:
 in_last();
 break;
 case 3:
 del_first();
 break;
 case 4:
 del_last();
  break;
 case 5:
 display();
 getch();
 break;
 case 6:
 search();
 getch();
 break;
 }
 }while(choice!=7);
  getch();
 }

