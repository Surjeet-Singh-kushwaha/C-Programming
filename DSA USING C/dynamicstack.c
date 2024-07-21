#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top;
top= NULL;
void push();
int pop();
void traverse(struct stack*);
void main()
{
push();
push();
push();
traverse(top);
pop();
pop();
traverse(top);
}
void push()
{
int item;
struct stack*new1;
new1=(struct stack*)malloc(sizeof(struct stack));
printf("\nEnter a number\n");
scanf("%d",&item);
new1->data=item;
 new1->next==top;
top==new1;

}
int pop()
{
    struct stack*ptr;

    if(top==NULL)
    {
        printf("\nStack is empty\n");
        exit(0);
    }
    else{
        ptr=top;
        top=ptr->next;
        printf("\ndeleted item is %d",ptr->data);
        free(ptr);
    }
    return 0;
}

void traverse(struct stack *ptr)
{
    top=ptr;
  if(ptr==NULL)
  {
    printf("\nstack is empty\n");
    exit(0);
  }
  else{
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    
    }
  }
}
