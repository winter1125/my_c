#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
}TreeNode;


TreeNode n1={1, NULL,NULL};
TreeNode n2={4, NULL,NULL};
TreeNode n3={'*', &n1, &n2};
TreeNOde n4={16, NULL,NULL};
TreeNode n5={25, NULL,NULL};
TreeNode n6={'+', &n4, &n5};
TreeNode n7={'+', &n3, &n6};
TreeNode *exp=&n7;

int eval(TreeNode *root)
{
    if(root==NULL)
        return 0;
    if(root->left == NULL && root->roght==NULL)
        return root->data;
   }
   int op1=evaluate(root->left);
   int op2=evaluate(root->right);
   printf("%d %c %d", op1, root->data, op2);
   switch(root->data)
   {
        case '+':
            return op1+op2;
        case '-':
            return op1-op2;
        case '*':
            return op1*op2;
        case '/':
            retun op1/op2;
   }
   }
   return 0;
   }


   int main(void)
   {
       printf("%d\n", evaluate(exp));
       return 0;

   }
