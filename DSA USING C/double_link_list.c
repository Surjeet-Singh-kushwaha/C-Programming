//Program for Double Link List

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
struct node *start;

void traverse(struct node *ptr)
{
  ptr=start;
  if(start==NULL)
  {
    printf("\n List is empty");
    return;
  }
  else{
	while(ptr!=NULL)
	{
	     printf("%d\n",ptr->data);
	     ptr=ptr->next;
	}
      }
}

void insert_at_begin()
{
 struct node *new1;
 int item;
  new1=(struct node*)malloc(sizeof(struct node));
  printf("\n enter a value");
  scanf("%d",&item);
  new1->data=item;
  if(start==NULL)		//if list is empty
 {
  new1->next=NULL;
  new1->prev=NULL;
  start=new1;
 }
 else                          //if list already exist
 {
  new1->next=start;
  new1->prev=NULL;
  start->prev=new1;
  start=new1;
 }
}

void insert_at_end(item)
{
 struct node *new1,*ptr;
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=item;
  new1->next=NULL;

  if(start==NULL)
  {
	new1->prev=NULL;
	start=new1;
  }
  else
  {
	ptr=start;
	while(ptr->next!=NULL)
	{
	  ptr=ptr->next;
	}                       //when list is already created
	new1->prev=ptr;
	ptr->next=new1;
  }
}

void insert_at_loc(item,loc)
{
 struct node *ptr,*new1;
 int i;
 i=1;
 ptr=start;
 while(i<loc)
 {
	ptr=ptr->next;
	i=i+1;
 }
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=item;
  new1->next=ptr->next;
  new1->prev=ptr;
  ptr->next->prev=new1;
  ptr->next=new1;
}

void del_begin()
{
  struct node *ptr;
  ptr=start;
  if(start==NULL)
  {
	printf("\n List is empty");
	return;
  }
  else if(start->next==NULL)        //when only one node found
  {
	start=NULL;
	printf("\n The Deleted Element is=%d",ptr->data);
	free(ptr);
  }
   else                      //when more than one nodes found
  {
	start=ptr->next;
	printf("\n The Deleted Element is=%d",ptr->data);
	start->prev=NULL;
	free(ptr);
  }
}

void del_end()
{
 struct node *ptr,*temp;
 ptr=start;
  if(start==NULL)
  {
	printf("\n List is empty");
	return;
  }
  else if(start->next==NULL)		//if only one node exist
  {
	printf("\n The Deleted Element is=%d",start->data);
	free(ptr);
	start=NULL;
  }
  else
  {                                  //if more than one nodes exist
	while(ptr->next!=NULL)
	{
	   ptr=ptr->next;
	}
	   ptr->prev->next=NULL;
	   ptr->prev=NULL;
	   printf("\n The Deleted Element is=%d",ptr->data);
	   free(ptr);
  }
}

void del_loc(loc)
{
 struct node *ptr;
 int i;
 ptr=start;
 i=1;
	while(i<loc)
	 {
	   ptr=ptr->next;
	   i=i+1;
	 }
	 printf("\n The Deleted Element is=%d",ptr->data);
	 ptr->prev->next=ptr->next;
	 ptr->next->prev=ptr->prev;
	 free(ptr);
}
void main()
{
   int choice,item,loc;
   char ch;
   start=NULL;
   do{
      
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
	case 1:printf("Enter the item::");
	       scanf("%d",&item);
	       insert_at_begin(item);
	       break;
	case 2:printf("Enter the item::");
	       scanf("%d",&item);
	       insert_at_end(item);
	       break;
	case 3:printf("Enter the item::");
	       scanf("%d",&item);
	       printf("\nEnter the Location::");
	       scanf("%d",&loc);
	       insert_at_loc(item,loc);
	       break;
	case 4:del_begin();
	       break;
	case 5:del_end();
	       break;
	case 6:printf("Enter the Location::");
	       scanf("%d",&loc);
	       del_loc(loc);
	       break;
	case 7:traverse(start);
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
