#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAXSIZE 5
int cq[MAXSIZE];
int front,rear;
void main()
{
  void add(int,int);
  void del(int);
  int ch,i,num;
  //clrscr();
  front=-1;
  rear=-1;
//  clrscr();
  printf("\n program for circular queue ");
  while(1)
  {
    printf("\n\n MAIN MENU \n 1.INSERTION \n 2.DELETION \n 3.exit");
    printf("\n\n enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
	     printf("\n\n enter the queue  element:");
	     scanf("%d",&num);
	     add(num,MAXSIZE);
	     break;
     case 2 :
	    del(MAXSIZE);
	    break;
     case 3 :
	    exit(0);
	       default :printf("\n\n invalid choice.");
    }
  }
}
void add(int item,int MAX)
{
  if(front==(rear+1)%MAX)
  {
   printf("\n\n CIRCULAR QUEUE IS OVERFLOW");
  }
  else
  {
     if(front==-1)
     front=rear=0;
     else
     rear=(rear+1)%MAX;
     cq[rear]=item;
     printf("\n\n rear=%d front=%d",rear,front);
  }
}
void del(int MAX)
{
  int a;
  if(front==-1)
  {
    printf("\n\n CIRCULA QUEUEIS UNDERFLOW");
  }
  else
  {
    a=cq[front];
    if(front==rear)
      front=rear=-1;
    else
      front=(front+1)%MAX;
   printf("\n\n dDELETED ELEMENT FROM QUEUE IS :%d",a);
   printf("\n\n rear =%d front=%d",rear,front);
  }
}
