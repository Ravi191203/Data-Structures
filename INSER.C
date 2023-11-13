//INSERTION SORT
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[50],i,j,n,item;
  clrscr();

  printf("Enter n value\n");
  scanf("%d",&n);

  printf("Enter array elements\n");

    for(i=0;i<n;i++)
	scanf("%d",&a[i]);

   for(i=1;i<n;i++)
     {
       item=a[i];
       j=i-1;

	while(j>=0 && item<a[j])
	  {
	     a[j+1]=a[j];
	     j--;
	  }
       a[j+1]=item;
     }

 printf("After sorting\n");
   for(i=0;i<n;i++)
       {
	 printf("%d\n",a[i]);
       }

 getch();
 }

/*OUTPUT

Enter n value
5
Enter array elements
6
1
4
2
5
After sorting
1
2
4
5
6   */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


