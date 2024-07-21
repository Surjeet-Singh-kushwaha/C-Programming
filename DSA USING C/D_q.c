#include<stdio.h>
#include<conio.h>
#define MAXSIZE 5
int dq[MAXSIZE];
int front=-1,rear=-1,choice,item,i;
char ch;
void dqinsert_rear();
void dqdelete_front();
void dqinsert_front();
void dqdelete_rear();
void dqtraverse();
void main()
{
    do
    {
    printf("\n1-Insert from rear end ");
    printf("\n2-Delete from front end ");
    printf("\n3-Insert form front end ");
    printf("\n4-Delete from rear end ");
    printf("\n5-Traverse ");
    printf("\nEnter a choice ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: dqinsert_rear();
        break;
    case 2: dqdelete_front();
        break;
    case 3: dqinsert_front();
        break;
    case 4: dqdelete_rear(); 
        break;
    case 5: dqtraverse();
        break;    
    default: printf("\nInvalid choice");
    }
    printf("\nDo you wish to continue(y/Y) ");
    fflush(stdin);
    scanf("%c",&ch);
    } while(ch=='y'||ch=='Y');
}    
   
 void dqinsert_rear()
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
                dq[rear]=item;

        }
        return;
    }
    
    void dqdelete_front()
    {
         if (front==-1)
        {
        printf("\nQueue underflow");
        getch();
        return;
        }
        else
        {
                item=dq[front];
                printf("deleted item is %d",item);
                if(front==rear)
                front=rear=-1;
                else
                front=front+1;
        }
        return;
    }

void dqinsert_front()
{
    if((front==0)&&(rear==MAXSIZE-1))
    {
        printf("\nDequeue overflow");
        return;
    }
    else 
    {
        printf("\nEnter a value ");
        scanf("%d",&item);
        if(front==-1)
        {
            front=0;
            rear=0;
            dq[front]=item;
        }
        else if(front=0&&rear!=MAXSIZE-1)
        {
        for(i=rear;i>=front;i--)
        {
            dq[i+1]=dq[i];
        }
        rear=rear+1;
        dq[front]=item;
        }
        else if(front>0)
        {
            front=front-1;
            dq[front]=item;
        }
    }

}   
void dqdelete_rear()
{
    if(front==-1)
    {
        printf("\nQueue underflow");
        return;
    }
    else 
    {
        item=dq[rear];
        printf("\nDelete value is %d",item);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else 
        {
            rear=rear-1;
        }
        return;
    }

} 
void dqtraverse()
{
    if(front==-1)
    {
        printf("\nQueue is empty ");
        return;

    }
    else
    {
        if(rear==front)
        {
            for(i=front;i<=rear;i++)
            {
                printf("%d\t",dq[i]);
            }
        }
    }
}