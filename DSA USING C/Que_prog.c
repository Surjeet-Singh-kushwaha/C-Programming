#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
int queue[MAXSIZE];
int front=-1,rear=-1,choice;
char ch;
int item,i;
void insert();
void delete();
void traverse();
void main()
{
    do{
        printf("\n1-Insert");
        printf("\n2-Delete");
        printf("\n3-Trsverse");
        printf("\nEnter a choice ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insert();
                    break;
            case 2: delete();
                    break;
            case 3: traverse();
                    break;
            default:
                   printf("\nInvalid choice");
                                           
        }
        printf("\nDo you wish to continue(y/Y)");
        fflush(stdin);
        scanf("%c",&ch);
        
      }while(ch=='y'||ch=='Y');
      getch();
}
void insert()
{
        if(rear==MAXSIZE-1)
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
                        rear=rear+1;
                }
                queue[rear]=item;

        }
        return;
}
void delete()
{
        if (front==-1)
        {
        printf("\nQueue underflow");
        getch();
        return;
        }
        else
        {
                item=queue[front];
                printf("deleted item is %d",item);
                if(front==rear)
                front=rear=-1;
                else
                front=front+1;
        }
        return;
}
void traverse()
{
        if(front==-1)
        {
                printf("\nqueue is empty");
                getch();
                return;

        }
        else{
                for(i=front;i<rear;i++)
                {
                        printf("\n%d",queue[i]);

                }
        }
        return;
}
