//INFIX TO POSTFIX
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
# define max 10
				   void push(int );
				    int pop();
				   void ip();
				    int ep();
				   int priority(char);
				

char   infix[max],postfix[max],symbol;
int   top=-1,stack[max];
  main()
   {
	    int value;
	     clrscr();
			     printf("Enter infix expression:");
			     gets(infix);
			      ip();
			     printf("postfix:%s\n",postfix);
   }
   void ip()
   {
	    int i,p=0;
	    char next,symbol;
			       for(i=0;i<strlen(infix);i++)
				      {
						symbol=infix[i];
						switch(symbol)
						    {
								 case '(':
										       push(symbol);
											 break;
								  case ')':
											     while((next=pop())!='(')
											     postfix[p++]=next;
											       break;
								  case '+':
								  case '-':
								   case '*':
								   case '/':
								    case '^':
							      while((top!=-1) && priority(stack[top])<=priority(symbol))
										      postfix[p++]=pop();
										    push(symbol);
										     break;
						  default :
								       postfix[p++]=symbol;
                                         }   // END SWITCH
         }  //END FOR
                             while(top!=-1)
                             postfix[p++]=pop();
                            postfix[p]='\0';
     } //END FUNCTION
  
   int priority(char symbol)
     {
      switch(symbol)
       {
       case '(':
       		return 4;
       case '+':
       case '-':
      		 return 3;
       case '*':
       case '/':
       
       		return 2;
       case '^':
      		 return 1;
      
 default:
       		return 0;
        } //end switch
   } // end for
  void push(int symbol)
      {
       top=top+1;
        stack[top]=symbol;
   }
 int pop()
  {
             return(stack[top--]);
  }

 
/*output

Enter infix expression:a-b^c+d*e/(f+g)
postfix:abc^-de*fg+/+

Enter infix expression:a+b/(c*d^e)-f*g^h    */
//postfix:abcde^*/+fgh^*-