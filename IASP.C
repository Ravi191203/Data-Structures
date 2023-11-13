/*PROGRAM TO INSERT AN ELEMENT AND DELETE AN ELEMENT
 IN A SPECIFIC POSITION ON ARRAY*/
#include<stdio.h>
#include<conio.h>
void main()
 {
  int a[100],i,n,ele,pos,x,y,ch;
  clrscr();

  printf("Enter the size of array\n");
  scanf("%d",&n);

  printf("Enter elements to an array\n");
   for(i=0;i<n;i++)
     scanf("%d",&a[i]);

for(;;)
  {

  printf("1.INSERT\n2.DELETE\n3.Exit\n");
  printf("Enter your choice\n");
  scanf("%d",&ch);

switch(ch)
  {
  case 1:

	  printf("Enter which  element do u want to insert\n");
	  scanf("%d",&ele);

	  printf("Which position do  you want to insert\n");
	  scanf("%d",&pos);

	  for(i=0;i<=pos;i++)
	    {
		 if(i==pos)
		    {
		       x=a[i];
			 for(i=pos;i<n;i++)
			    {
			      y=a[i+1];
			      a[i+1]=x;
			      x=y;
			    }
		    }
	     }

	    a[pos]=ele;

	    printf("After insertion\n");
	      for(i=0;i<=n;i++)
	       printf("%d\n",a[i]);

	   break;

  case 2:
	  printf("Enter which position element do you want to delete\n");
	  scanf("%d",&pos);
	    for(i=pos;i<n;i++)
	       a[i]=a[i+1];

	   printf("After deleting elements of array are\n");
	    for(i=0;i<n;i++)
	      printf("%d\n",a[i]);

	   break;


    default: exit();
}

}
getch();
}

/*OUTPUT
Enter the size of array
4
Enter elements to an array
1 2 3 5
1.INSERT
2.DELETE
3.Exit

Enter your choice
1

Enter which  element do u want to insert
4
Which position do  you want to insert
4
After insertion
1
2
3
5
4

1.INSERT
2.DELETE
3.Exit
Enter your choice
2

Enter which position element do you want to delete
4
After deleting elements of array are
1
2
3
5
1.INSERT
2.DELETE
3.Exit
Enter your choice
3        */















