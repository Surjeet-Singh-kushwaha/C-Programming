//Circular queue using array
#include<stdio.h> 
#include<conio.h>
#define MAXSIZE 5
int cq[MAXSIZE],front=-1,rear=-1,choice,item,i;
char ch;
void cqinsert();
void cqdelete();
void cqtraverse();
void main()
{
do
{

printf("\n1-Insert ");
printf("\n2-Delete ");
printf("\n3-Traverse ");
printf("\nenter your choice.. ");
scanf("%d",&choice);
switch(choice)
{
case 1: cqinsert();
        break;
case 2: cqdelete();
        break;
case 3: cqtraverse();
        break;     
 default: printf("\nWrong choice");              
}
printf("\nDo you want to continue(y/Y)");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}
void cqinsert()
{
if(front==(rear+1)%MAXSIZE)
{
printf("\nQueue is overflow");
return;
}
else
{
printf("\nEnter a value");
scanf("%d",&item);
if(front==-1)
{
front=0;
rear=0;
}
else
{
rear=(rear+1)%MAXSIZE;
}
cq[rear]=item;
return;
}
}
void cqdelete()
{
   if(front==-1)
   {
  printf("\nQueue underflow");
  return;
  }
  else
  {
    item=cq[front];
    printf("\ndelete value is %d",item);
    if(front==rear)
    {
    front=rear=-1;
   	}
    else
    {
    front=(front+1)%MAXSIZE;
    return;
    }
  }
}
void cqtraverse()
{
	if(front==-1)
	{
		printf("\nqueue is underflow");
		return;
	}
	else
	{
		if(rear>=front)
		{
			for(i=front;i<=rear;i++)
			printf("\n%d",cq[i]);
		}
	}
	return;
}
