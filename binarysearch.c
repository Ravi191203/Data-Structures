//BINARY SEARCH USING FUNCTION

#include<stdio.h>
#include<conio.h>
int bs(int[],int,int);
void main()
{
  int a[100],ch,n,i,ele,p;
  clrscr();

  printf("Enter array size\n");
  scanf("%d",&n);

  printf("Enter elements in ascending order\n");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);

   printf("Enter search element\n");
   scanf("%d",&ele);
   p=bs(a,ele,n);

  if(p==-1)
     printf("Searching element is not found\n");
  else
     printf("Element is found in %d position\n",p);

 getch();
 }



int bs(int a[],int ele,int n)
{
 int low=0,high=n-1,mid;

  while(low<=high)
    {
       mid=(low+high)/2;

    if(a[mid]<ele)
       low=mid+1;

    else if(a[mid]>ele)
	high=mid-1;

    else
       return(mid);
    }
 return(-1);
}


/*OUTPUT
Enter array size
5
Enter elements in ascending order
1 5 7 9 11
Enter search element
7
Element is found in 2 position


Enter array size
5
Enter elements in ascending order
1 2 5 8 15
Enter search element
19
Searching element is not found  */
















                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
