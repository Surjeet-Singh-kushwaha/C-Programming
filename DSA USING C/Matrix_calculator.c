#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define ROW 3
#define COLUMN 3
int i,j,k;
int A[ROW][COLUMN];
int B[ROW][COLUMN];
int Result[ROW][COLUMN];
void input_ele(int Arr[ROW][COLUMN])
{
	for(i=0;i<ROW;i++)
	{
		printf("Enter element of %d row:\n",i+1);
		for(j=0;j<COLUMN;j++)
		{
			scanf("%d",&Arr[i][j]);
		}
	}
}
void Show_matrix(int Arr[ROW][COLUMN])
{

	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
			printf("%4d\t",Arr[i][j]);
		}
		printf("\n");
	}
}
void Matrix_addtion()
{
    printf("Enter element of first matrix:\n");
	input_ele(A);
	printf("Enter element of Second matrix:\n");
	input_ele(B);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
				Result[i][j]=0;
			Result[i][j]=A[i][j]+B[i][j];
		}
	}
		printf("Sum of matrices\n");
	Show_matrix(Result);	
}
void Matrix_subtraction()
{
    printf("Enter element of first matrix:\n");
	input_ele(A);
	printf("Enter element of Second matrix:\n");
	input_ele(B);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{
				Result[i][j]=0;
			Result[i][j]=A[i][j]-B[i][j];
		}
	}
		printf("Subtraction of matrices\n");
	Show_matrix(Result);	
}
void  Matrix_mul()
{
    printf("Enter element of first matrix:\n");
	input_ele(A);
	printf("Enter element of Second matrix:\n");
	input_ele(B);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COLUMN;j++)
		{	
		Result[i][j]=0;
		   for(k=0;k<ROW;k++)
        	{
		       Result[i][j]+=A[i][k]*B[k][j];
		    }
       }
   }
   	printf("Product of conformable  matrices\n");
	Show_matrix(Result);
}

void main()
{
	int choice;
	char ch;
	do{
	printf("1.Matrix Addition\n");
	printf("2.Matrix Subtraction\n");
	printf("3.Matrix Multiplication\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: Matrix_addtion();
		        break;
		case 2: Matrix_subtraction();
		        break;
		case 3: Matrix_mul();
		        break;		        
		default:
			printf("invalid choice\n");
			exit(0);
		}	
	fflush(stdin);
	printf("do you want to continue(y/Y): ");
	scanf("%c",&ch);
      }while(ch=='y'||ch=='Y');

}

