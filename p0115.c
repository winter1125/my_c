#include <stdio.h>
#include <stdlib.h>
#include<memory.h>

typedef struct TreeNode{

    int data;
    struct TreeNode *left, *right;
}TreeNode;


void printNode(TreeNode* p, int th)
{

    if(p != NULL){
        if(p->data < th)
            printf("%d보다 작은 노드 : %d\n", th, p->data);
            printNode(p->left, th);
            printNode(p->right, th);
    }
    }

 int main(void)
 {
     TreeNode *n1, *n2, *n3;
     n1=(TreeNode*)malloc(sizeof(TreeNode));
     n2=(TreeNode*)malloc(sizeof(TreeNode));
     n3=(TreeNode*)malloc(sizeof(TreeNode));
     n1->data=10;
     n1->left=n2;
     n1->right=n3;
     n2->data=20;
     n2->left=NULL;
     n2->right=NULL;
     n3->data=30;
     n3->left=NULL;
     n3->right=NULL;

     int value;
     value=20;
     printNode(n1, value);
     free(n1);
     free(n2);
     free(n3);
     return 0;

 }
