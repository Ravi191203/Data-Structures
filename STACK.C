//STACK OPERATION
#include<stdio.h>
#include<conio.h>
#define max 6
int s[max],top=-1,ele;
void push();
void pop();
void display();


 void main()
   {
     int ch;
     clrscr();
     printf("stack operation\n");
     for(;;)
       {
	 printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
	 printf("Enter your choice\n");
	 scanf("%d",&ch);

	 switch(ch)
	   {
	      case 1:
		      push();
		      break;

	      case  2:
		       pop();
		       break;
	      case  3:
		       display();
		       break;
	      default:
			exit();
	    }
       }
   }



void push()
 {
   int ele;

   if(top==max-1)
      printf("Stack overflow\n");
   else
     {
       printf("Enter which element you want to push\n");
       scanf("%d",&ele);
       top=top+1;
       s[top]=ele;
       printf("%d is inserted sucessfully\n",ele);
      }
 }


 void pop()
   {
    if(top==-1)
       printf("Underflow\n");
    else
      {
       printf("poped element is %d\n",s[top]);
       top--;
      }
   }


void display()
     {
       int i;
	if(top==-1)
	   printf("Empty stack\n");
	else
	    printf("Elements of stack are\n");
	     for(i=top;i>=0;i--)
	       printf("%d\n",s[i]);
      }


/*OUTPUT
STACK OPERATION
1.Push
2.Pop
3.Display
4.Exit
Enter your choice
1
Enter which element you want to push
8
8 is inserted sucessfully

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
1
Enter which element you want to push
9
9 is inserted sucessfully

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
1
Enter which element you want to push
10
10 is inserted sucessfully

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
1
Enter which element you want to push
1
1 is inserted sucessfully

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
1
Enter which element you want to push
2
2 is inserted sucessfully

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
1
Enter which element you want to push
3
3 is inserted sucessfully

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
1
Stack overflow

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
3

Elements of stack are
3
2
1
10
9
8

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
2
poped element is 2

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
2
poped element is 2

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
2
poped element is 2

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
2
poped element is 2

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
2
poped element is 2

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
2
poped element is 2

1.Push
2.Pop
3.Display
4.Exit
Enter your choice
2
Underflow


1.Push
2.Pop
3.Display
4.Exit
Enter your choice
3
Empty stack */

























