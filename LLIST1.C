//SiNGLE LINKED LIST.1)creation 2)insert in between 3)Display
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
};
struct node *start,*temp,*temp1;

void display();
void cl(int);
void insertinb(int,int);
void delinb();

void main()
{
 int ch,i,n,ele,pos;
 while(1)
  {
    printf("\n1.create a list\n2.Insert in between\n3.Delete in between\n4.Display\n5.Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
     {
	case 1:
		start=NULL;
		printf("How many nodes do you want:");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		  {
		    printf("Enter the element\n");
		    scanf("%d",&ele);
		    cl(ele);
		  }
		break;
	case 2:
		 printf("Enter the position\n");
		 scanf("%d",&pos);
		 if(pos<=n)
		  {
		    printf("Enter the element\n");
		    scanf("%d",&ele);
		    insertinb(ele,pos);
		  }
		  else
		    printf("Not possible to insert\n");

		 break;
	case 3:
		 printf("Enter which position do you want to delete\n");
		 scanf("%d",&pos);
		 delinb(pos);
		 break;

	case 4:
		 display();
		 break;
       default:
		 exit(0);
      }

  }
}


void cl(int ele)
{
 struct node *new1,*temp;
 new1=malloc(sizeof(struct node));
 new1->info=ele;
 new1->link=NULL;
   if(start==NULL)
    start=new1;
   else
   {
     temp=start;
       while(temp->link!=NULL)
	     temp=temp->link;
	     temp->link=new1;
   }
}


void insertinb(int ele,int pos)
 {
    struct node *new1;
    int count=1;
    temp=start;
    temp1=start->link;
    while(count<pos-1)
     {
	temp=temp1;
	temp1=temp1->link;
	count++;
      }
    new1=malloc(sizeof(struct node));
    new1->info=ele;
    new1->link=temp1;
    temp->link=new1;
    //printf("Element %d is inserted suceesfully to the front\n",ele);
 }



void display()
{
 temp=start;
  if(start==NULL)
   printf("Empty list\n");
  else
    while(temp!=NULL)
      {
	printf("%d   ",temp->info);
	temp=temp->link;
      }
}


void delinb(int pos)
 {

   int count=1;
   temp=start;
    temp1=temp->link;
    if(start==NULL)
       printf("empty list\n");

    else if(temp->link==NULL)
	 {
	  printf("deleted\n");
	  free(temp);
	  start=NULL;
	 }
    else
    {
       while(count<pos-1)
	{
	 temp=temp1;
	 temp1=temp1->link;
	 count++;
	}
	printf("Node is deleted\n");
	temp->link=temp1->link;
	free(temp1);

    }
 }


