//MERGE TWO SORT ARRAY

#include<stdio.h>
#include<conio.h>
void main()
  {
    int a[20],b[20],c[20],m,n,i,j,k;
    clrscr();

    printf("Enter first array size\n");
    scanf("%d",&m);

     printf("Enter the elements to first array\n");
       for(i=0;i<m;i++)
	 scanf("%d",&a[i]);

    printf("Enter second array size\n");
    scanf("%d",&n);

       printf("Enter  the elements to second array\n");
	 for(i=0;i<n;i++)
	  scanf("%d",&b[i]);
       i=0;j=0;k=0;

       while(i<m  && j<n)
	 {
	   if(a[i]<b[j])
	     {
	      c[k]=a[i];
	      i++;
	      k++;
	     }
	   else
	     {
	      c[k]=b[j];
	      j++;
	      k++;
	     }
	 }


    while(i<m)
	 {
	   c[k]=a[i];
	   i++;
	   k++;
	 }

     while(j<n)
	  {
	     c[k]=b[j];
	      j++;
	      k++;
	     }

 printf("After merging two sorted array\n");
 for(i=0;i<m+n;i++)
   printf("%d   ",c[i]);

 getch();
 }


 /*OUTPUT
 Enter first array size
4
Enter the elements to first array
1 3 4 6
Enter second array size
5
Enter  the elements to second array
2 5 7 8 9
After merging two sorted array
1   2   3   4   5   6   7   8   9   */







                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                





