#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a,b;
int add()
{
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	return a+b;
}
int sub()
{
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	return a-b;
}
int mul()
{
printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	return a*b;
}
float Div()
{
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	return (a/b);
}
void main()
{
	int choice;
	char ch;
	do{
		printf("\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n");
	    printf("Enter a choice: ");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:printf("%d+%d= %d",a,b,add());
	    	       break;
	    	case 2:printf("%d-%d=%d",a,b,sub());
	    	       break;
	    	case 3:printf("%d x %d = %d",a,b,mul());
	    	       break;
	    	case 4:printf("%d / %d = %.2f",a,b,Div());
	    	       break;
	    	default: printf("invalid choice\n");
			         exit(0);       
	    	                        
		}
		printf("\ndo you wish to continue(y/Y)");
		fflush(stdin);
		scanf("%c",&ch);
	
	}while(ch=='y'||ch=='Y');
	
}

