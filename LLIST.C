//SiNGLE LINKED LIST.1)creation 2)insert at front 3)delete at rare 4)Display
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
  int info;
  struct node *link;
};
struct node *start,*temp,*temp1;

void display();
void cl(int);
void insertfront(int ele);
void delrare();

void main()
{
 int ch,i,n,ele;
 while(1)
  {
    printf("\n1.create a list\n2.Insert at front\n3.Delete at rare\n4.Display\n5.Exit\n");
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
		 printf("Enter the element\n");
		 scanf("%d",&ele);
		 insertfront(ele);
		 break;
	case 3:
		 delrare();
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


void insertfront(int ele)
 {
    struct node *new1;
    new1=malloc(sizeof(struct node));
    new1->info=ele;
    new1->link=start;
    start=new1;
    printf("Element %d is inserted suceesfully to the front\n",ele);
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


void delrare()
 {
   temp=start;
    temp1=temp->link;
    if(start==NULL)
       printf("empty list\n");

  else if(temp->link==NULL)
	{
	   printf("node deleted\n");
	   free(temp);
	   start=NULL;
	}
    else
    {
       while(temp1->link!=NULL)
	{
	 temp=temp1;
	 temp1=temp->link;
	}
	printf("Node is deleted\n");
	free(temp1);
	temp->link=NULL;
    }
 }


