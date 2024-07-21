//dynamic implementation of stack
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
int data;
struct stack *next;
};
struct stack *top;
void traverse(struct stack *ptr)
{
	printf("\nElement in stack are\n");
  top=ptr;
  if(ptr==NULL)
  {
      printf("\n stack is empty");
      return;
  }
  else{
	while(ptr!=NULL)
       {
	     printf("\n %d",ptr->data);
	     ptr=ptr->next;
       }
     }
}

void push()
{
struct stack *new1;
int item;
printf("\n Enter a value");
scanf("%d",&item);
new1=(struct stack *)malloc(sizeof(struct stack));
new1->data=item;

   new1->next=top;
   top=new1;

}
void pop()
{
  struct stack *ptr;
  int item;
  if(top==NULL)
  {
	printf("list is empty");
	exit(0);
  }
  else{
	ptr=top;
	top=ptr->next;
	printf("\n deleted element is %d",ptr->data);
	free(ptr);
      }

}
void main()
{

push();
push();
push();
push();
traverse(top);
pop();
pop();
printf("\nAfter pop operation\n");
traverse(top);
getch();
}
