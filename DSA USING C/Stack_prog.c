#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
int pop();
void traverse();
int i,item;
int top=-1;
int stack[MAXSIZE];
void main()
{ 
	int ch;
	char choice;
//	clrscr();
	 do
	 {
	 	printf("\n1-PUSH");
		 printf("\n2-POP");
		 printf("\n3-TRAVERSE");
		 printf("\nEnter any choice\n");
		 scanf("%d",&ch);
		 
		 switch(ch)
		 {
		 	case 1: push();// printf("\ninserted element is %d",item);
		 	        break;
		 	case 2: i=pop(); printf("\ndeleted element is %d",i);
		            break;	
		 	case 3: traverse();
		 	        break;
		 	default:
			       printf("\nInvalid choice ");
	      }
	      
		  printf("\nDo you want to continue(Y/y)");
		  fflush(stdin);
		  scanf("%c",&choice); 
	   }while(choice=='y'||choice=='Y');
}
void push()
{
	if(top==MAXSIZE-1)
	{
		printf("\nstack overflow");
		exit(0);
		
	}
	else
	{
		printf("\nEnter a value");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("\nstack umderflow");
		exit(0);
	}
	else
	{
		item=stack[top];
		top=top-1;
	}
	return item;
}
void traverse()
{
	if(top==-1)
	{
		printf("\nstack is empty");
		getch();
		
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
		}
	}
		
}
