#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
char s[50],postfix[50],infix[50];
int top=-1;
int pop();
void push(int);
int evalpost();
void main()
 {
  int value;
   printf("Enter a valid postfix expression\n");
   gets(postfix);
   value=evalpost();
   printf("value=%d",value);
  }

    int evalpost()
   {
    int a,b,temp,result;
    int i;

   for(i=0;i<strlen(postfix);i++)
    {


      if(postfix[i]>='0' && postfix[i]<='9')

	  push(postfix[i]-'0');
      else
       {
	a=pop();
	b=pop();

	 switch(postfix[i])
	  {
	    case '+':
		     temp=b+a;
		     break;
	    case '-':
		     temp=b-a;
		     break;
	    case '*':
		     temp=a*b;
		     break;
	    case '/':
		     temp=b/a;
		     break;
	    case'^':
		    temp=pow(b,a);
		    break;
	  }
	   push(temp);

    }


}
result=pop();
return(result);
}

int pop()
  {
   return(s[top--]);
  }

  void push(int symbol)
  {
  top++;
  s[top]=symbol;
  }

  /*OUTPUT
  Enter a valid postfix expression
7532^*922^-/+64*+                                                               
value=40 */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                



