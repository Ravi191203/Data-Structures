#include<stdio.h>
#include<conio.h>
#define max 5
   void insert();
   void del();
   void display();

   int  q[max],f=0,r=-1,count=0;

 void main()
  {
   int ch;
   clrscr();
   printf("Circular Queue operation\n");
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

     if(max==count)
       printf("Queue full\n");
     else
	{
	 printf("Enter element\n");
	 scanf("%d",&ele);
	 r=(r+1)%max;
	 q[r]=ele;
	 count++;
	 printf("%d element inserted sucessfully\n",ele);
	}
   }

   void del()
   {
   int p;
     if(count==0)
	printf("Empty queue\n");
    else
      {

       printf("Deleted item is %d\n",q[f]);
       f=(f+1)%max;
       count--;
      }
  }

  void display()
    {

    int i,j;

     if(count==0)
       printf("empty queue\n");
     else
	 {
	  printf("Contents of queue are\n");
	   j=f;
	     for(i=0;i<count;i++)
	      {
		 printf("%d\n",q[j]);
		 j=(j+1)%max;
	      }
	  }
      }

