//TREE CREATION AND TRAVERSING USING RECURSION.
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct node
 {
    char data;
    struct node *left;
    struct node *right;
}node;

  node * create()
    {
     node *p;
     char x;
     printf("Enter data(n for no data)\n");
     fflush(stdin);
     scanf("%c",&x);
     if(x=='n')
	return NULL;
     p=(node*)malloc(sizeof(node));
     p->data=x;
     printf("Enter left child of %c\n",x);
     p->left=create();
     printf("Enter right child of%c:\n",x);
     p->right=create();
     return p;
   }




void preorder(node *t)
{

   if(t!=NULL)
    {
	printf("%c  ",t->data);
	preorder(t->left);
	preorder(t->right);
    }
}


void inorder(node *t)
 {
    if(t!=NULL)
       {
	 inorder(t->left);
	 printf("%c    ",t->data);
	 inorder(t->right);
       }
 }


void postorder(node *t)
  {
     if(t!=NULL)
       {
	  postorder(t->left);
	  postorder(t->right);
	  printf("%c   ",t->data);
	}
   }



 void main()
  {
    node *root;
    clrscr();
    root=create();
    printf("\nThe preorder traversal of tree is:\n");
    preorder(root);
    printf("\nThe postorder traversal of tree is:\n");
    postorder(root);
    printf("\nThe inorder traversal of tree is:\n");
    inorder(root);
  }