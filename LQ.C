#include<stdio.h>
#include<conio.h>
#define max 5
   void insert();
   void del();
   void display();

   int  q[max],f=-1,r=-1;

 void main()
  {
   int ch;
   clrscr();
   printf("Linear Queue operation\n");
   for(;;)
     {
       printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
       printf("\nEnter your choice\n");
       scanf("%d",&ch);
       switch(ch)
	 {
	   case 1:
		   insert();
		   break;
	   case 2:
		   del();
		   break;
	   case 3:
		   display();
		   break;
	   default:
		    exit();
	}
     }
  }

void insert()
   {
     int ele;
       if(f==-1)
	  f=0;
       if(r==max-1)
	  printf("queue is full\n");
       else
	 {
	   printf("Enter element\n");
	   scanf("%d",&ele);
	   r=r+1;
	   q[r]=ele;
	   printf("%d is inserted sucessfully\n",ele);
	 }

    }


void del()
   {
     if(f==-1 || f==r+1)
       printf("Queue is empty\n");
     else
       {
	 printf("delete element is %d\n",q[f]);
	 f=f+1;
	}
    }

void display()
  {
   int i;

    if(r==-1 || f>r)
       printf("Empty queue\n");
    else
      {
       printf("Contents of queue are\n");
	for(i=f;i<=r;i++)
	 printf("%d\n",q[i]);
      }
  }
