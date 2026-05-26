//WAP TO IMPLEMENT A SINGLY LINKED LIST TO PERFORM OPERATION
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct singly
{
int no;
struct singly *next;
}start,*node,*new,*temp;

//function of insert first
void in_first()
{
printf("\n inserting as a first node");
new=(struct singly *)malloc(sizeof(struct singly));
node=new;
node->next=start.next;
start.next=new;
printf("\n enter a value");
scanf("%d",&new->no);
node=start.next;
/*while(node->next)
{
printf("\n%d",node->no);
node=node->next;
} */

}
//function of insert last
void in_last()
{
node=&start;
while(node->next)
{
node=node->next;
}
node->next=(struct singly *)malloc(sizeof(struct singly));
node=node->next;
node->next=NULL;
printf("\n inserting as a last node");
printf("\n enter a value");
scanf("%d",&node->no);
}

// function of delete first
void del_first()
{
node=start.next;
if(node==NULL)
{
printf("\n empty");
}
else
{
start.next=node->next;
free(node);
}
}

// function of delete last
void del_last()
{
node=start.next;
if(node==NULL)
{
printf("\n empty");
}
else
{
while(node->next->next!=NULL)
{
node=node->next;
}
free(node->next);
node->next=NULL;
}
}
//search function
void search()
{
int f=0,s=1,num;
printf("\n input the value you want to search");
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
printf("\n search is success");
printf("\n location %d",s);
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
{
printf("\n search is unsucess");
}
}



//display function
void display()
{
node=start.next;
while(node)
{
printf("\n %d",node->no);
node=node->next;
}
getch();
}

//void main function
void main()
{
char ch;
int choice;
clrscr();
/*node=&start;
start.next=NULL;*/

do
{
clrscr();
printf("\n----------menu");
printf("\n---1=insert as a first");
printf("\n---2=insert as a last");
printf("\n---3=delete as a first");
printf("\n---4=delete as a last");
printf("\n---5=search ");
printf("\n---6=display");
printf("\n---7=exit");
printf("\nenter your choice");
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
search();
getch();
break;
case 6:
display();
getch();
break;
}
}while(choice!=7);
getch();
}

