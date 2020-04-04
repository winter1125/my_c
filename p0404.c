#include <stdio.h>
#include <stdlib.h>

 int num1;
 char a,b,c,array[81][2];

typedef struct node{
    char data;
    struct Node *left;
    struct Node *right;
}node;

node* create(char data){
    node* newnode = (node*)malloc(sizeof(node));

    newnode->left=NULL;
    newnode->right=NULL;
    newnode->data=data;
    return newnode;
}

void preorder(node* root){
if(root == NULL)
    return;
    printf("%c", root->data);
    preorder(root->left);
    preorder(root->right);
}


void inorder(node* root){
if(root == NULL)
    return;
    inorder(root->left);
    printf("%c", root->data);
    inorder(root->right);
}

void postorder(node* root){
if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%c", root->data);
}



int main()
{
    freopen("input.txt","r", stdin);
    node* root[27];


    scanf("%d", &num1);

     if(num1<1 || num1>26)
    {
        return;
    }

    for(int i=0; i<num1; i++){
        scanf(" %c %c %c", &a, &b, &c);
        array[i][0]=b;
        array[i][1]=c;
        root[i]=create(a);
    }

    for(int i=0; i<num1; i++){
        for(int j=0; j<num1;j++){
            if(array[i][0] == root[j]->data)
                root[i]->left= root[j];

             if(array[i][1] == root[j]->data)
               root[i]->right=root[j];

        }

    }
    preorder(root[0]);
    printf("\n");
    inorder(root[0]);
    printf("\n");
    postorder(root[0]);

    return 0;



}

