//program for circular linke list
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *front=NULL,*rear=NULL;
int choice,item,loc;
char ch;

void traverse(struct node *ptr);
void insert_at_begin();
void insert_at_end();
void insert_at_loc();
void del_begin();
void del_end();
void del_loc();
void traverse();

void main()
{

   do{
      //clrscr();
      printf("\t\t1-insert at beginning\n");
      printf("\t\t2-insert at end\n");
      printf("\t\t3-insert at specified location\n");
      printf("\t\t4-Delete from beginning\n");
      printf("\t\t5-Delete from end\n");
      printf("\t\t6-Delete from specified Location\n");
      printf("\t\t7-Traverse\n");
      printf("\t\t8-Exit\n");
      printf("\n\tEnter your choice::");
      scanf("%d",&choice);
      switch(choice)
      {
	case 1:
	       insert_at_begin();
	       break;
	case 2:
	       insert_at_end();
	       break;
	case 3:
	       insert_at_loc();
	       break;
	case 4:del_begin();
	       break;
	case 5:del_end();
	       break;
	case 6:
	       del_loc();
	       break;
	case 7:traverse(front);
	       break;
	default:printf("Invalid choice");
		exit(0);
       }
       fflush(stdin);
       printf("\t\t\nDo you want to continue::");
       scanf("%c",&ch);
  }//end of DO..while
  while((ch=='y')||(ch=='Y'));
  getch();
}

void traverse(struct node *ptr)
{
  ptr=front;
  do{
     printf("%d\n",ptr->data);
     ptr=ptr->next;
  }while(ptr!=front);
}

void insert_at_begin()
{
 struct node *new1;
 printf("Enter the item::");
 scanf("%d",&item);
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=item;
  if(front==NULL)		//if list is empty
 {
  new1->next=new1;
  front=rear=new1;
 }
 else                          //if list exist
 {
  new1->next=front;
  front=new1;
  rear->next=new1;
 }
}

void insert_at_end()
{
 struct node *new1,*ptr;
 printf("Enter the item::");
 scanf("%d",&item);
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=item;

  if(front==NULL)
  {
	new1->next=new1;
	front=rear=new1;
  }
  else
  {                                //when list is already created
	//new1->next=front;
	rear->next=new1;
	rear=new1;
	new1->next=front;
  }
}

void insert_at_loc()
{
 struct node *ptr,*new1;
 int i;
 i=1;
 ptr=front;
 printf("Enter the item::");
 scanf("%d",&item);
 printf("\nEnter the Location::");
 scanf("%d",&loc);
 while(i<loc)
 {
	ptr=ptr->next;
	i=i+1;
 }
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=item;
  new1->next=ptr->next;
  ptr->next=new1;
}

void del_begin()
{
  struct node *ptr;
  if(front==NULL)
  {
	printf("\n List is empty");
	return;
  }
  else if(front==rear)        //when only one node found
  {
	ptr=front;
	printf("\n The Deleted Element is=%d",ptr->data);
	free(ptr);
	front=rear=NULL;
   }
   else                      //when more than one nodes found
  {
	ptr=front;
	front=ptr->next;
	printf("\n The Deleted Element is=%d",ptr->data);
	rear->next=front;
	free(ptr);
  }
}

void del_end()
{
 struct node *ptr,*temp;
  if(front==NULL)
  {
	printf("\n List is empty");
	return;
  }
  else if(front->next==front)		//if only one node exist
  {
	ptr=front;
	front=rear=NULL;
	printf("\n The Deleted Element is=%d",ptr->data);
	free(ptr);
  }
  else
  {                                  //if more than one nodes exist
	ptr=front;
	while(ptr->next!=front)
	{
	   temp=ptr;
	   ptr=ptr->next;
	}
	   temp->next=ptr->next;
	   rear=temp;
	   printf("\n The Deleted Element is=%d",ptr->data);
	   free(ptr);
  }
}

void del_loc()
{
 struct node *ptr,*temp;
 int i;
 ptr=front;
 i=1;
 printf("Enter the Location::");
 scanf("%d",&loc);
 while(i<loc)
 {
   temp=ptr;
   ptr=ptr->next;
   i=i+1;
 }
 printf("\n The Deleted Element is=%d",ptr->data);
 temp->next=ptr->next;
 free(ptr);
}
