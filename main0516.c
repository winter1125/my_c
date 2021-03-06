#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b)(a)

typedef struct AVLNODE{
    int key;
    struct AVLNODE *left;
    struct AVLNODE *right;
}AVLNODE;

int get_height(AVLNODE *node)
{

    int height=0;
    if(node != NULL)
        height=1+MAX(get_height(node->left), get_height(node->right));
    return height;
}

int get_balance(AVLNODE *node)
{

    if(node==NULL) return 0;
    return get_height(node->left)-get_height(node->right);
}

AVLNODE * create_node(int key)
{

    AVLNODE *node = (AVLNODE *)malloc(sizeof(AVLNODE));
    node->key=key;
    node->left=NULL;
    node->right=NULL;
    return(node);

}

AVLNODE* rotate_right(AVLNODE *parent)
{

    AVLNODE *child=parent->left;
    parent->left=child->right;
    child->right=parent;
    return child;
}

AVLNODE* rotate_left(AVLNODE * parent)
{

    AVLNODE * child=parent->right;
    parent->right=child->left;
    child->left=parent;
    return child;
}

AVLNODE *insert(AVLNODE *node, int key)
{

    if(node==NULL)
        return(create_node(key));

    if(key < node->key)
        node->left=insert(node->left, key);
    else if(key > node->key)
        node->right=insert(node->right, key);
    else
        return node;

    int balance = get_balance(node);
//LL
    if(balance >1 && key < node->left->key)
        return rotate_right(node);
//RR
    if(balance <-1 && key > node->right->key)
        return rotate_left(node);

  //LR
   if(balance >1 && key > node->left->key)
    {
        node->left=rotate_left(node->left);
        return rotate_right(node);
    }


   //RL type

    if(balance <-1 && key < node->right->key)
    {
        node->right=rotate_right(node->right);
        return rotate_left(node);
    }
    return node;
}

void preorder(AVLNODE *root)
{
     if(root!=NULL)
     {
   printf("[%d] ", root->key);
    preorder(root->left);
    preorder(root->right);
}

}


int main()
{
    AVLNODE *root=NULL;
root=insert(root,10);
root=insert(root,20);
root=insert(root,30);
root=insert(root,40);
root=insert(root,50);
root=insert(root,29);

printf("전위순회 결과\n");
preorder(root);
return 0;
}
