#include<stdio.h>
#include<conio.h>
#include<time.h>
void towh(int,char,char,char);
int count=0;
void main()
 {
	int n;
	char source='a',temp='b',dest='c';

	    printf("Enter number of disks\n");
	    scanf("%d",&n);
	    towh(n,source,temp,dest);
	    printf("Total number of movements=%d\n",count);
 }

 void towh(int n,char source,char temp, char dest)
  {
    if(n==1)
       {
	  printf("Disk %d move from %c to %c\n",n,source,dest);
	 // sleep(4);
	  count++;
	  return;
	}
    towh(n-1,source,dest,temp);
       count++;
       printf("Disk %d move from %c to %c\n",n,source,dest);
    towh(n-1,temp,source,dest);
   }


/*OUTPUT

Enter number of disks
4                                                                               
Disk 1 move from a to b                                                         
Disk 2 move from a to c                                                         
Disk 1 move from b to c                                                         
Disk 3 move from a to b                                                         
Disk 1 move from c to a                                                         
Disk 2 move from c to b                                                         
Disk 1 move from a to b                                                         
Disk 4 move from a to c                                                         
Disk 1 move from b to c                                                         
Disk 2 move from b to a                                                         
Disk 1 move from c to a                                                         
Disk 3 move from b to c                                                         
Disk 1 move from a to b                                                         
Disk 2 move from a to c                                                         
Disk 1 move from b to c
Total number of movements=15 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                









                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                












                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

