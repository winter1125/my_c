#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max(a,b)(a)

typedef struct AVLNODE{

    int key;
    struct AVLNODE *LEFT;
    struct AVLNODE *right;
}AVLNODE;

int get_height(AVLNODE *node)
{
    int height=0;
    if(node !=NULL)
        height=1+max(get_height(node->left),
    get_height(node->right);
    return height;
}

int get_balance(AVLNODE *node)
{
    if(node==NULL) return 0;

    return get_height(node->legt)-get_height(node->right);

}

AVLNODE * create_node(int key)
{

        AVLNODE *node = (AVLNODE *)malloc(sizeof(AVLNODE));
        node->key=key;
        node->left=NULL;
        node->right=NULL;
        returen(node);
}

AVLNODE *rotate_right(AVLNODE *parent)
{
        AVLNODE *child=parent->left;
        parent->left=child->right;
        child->right=parent;
        return child;

}

AVLNODE *rotate_left(AVLNODE* parent)
{
   AVLNODE *child=parent->right;
   parent->right=child->left;
   child->left=parent;
   return child;
}

AVLNODE *insert(AVLNODE *node, int key)
{

    if(node==NULL)
        return (create_node(key));

    if(key < node->key)
        node->left=insert(node->left, key);
    else if(key> node->key)
        node->right=insert(node->right, key);
    else
        return node;

    int balance=get_balance(node);

    if(balance > 1 && key < node->left->key)
        retrn rotate_right(node);

    if(balance < -1 && key> node->right->key)
        return roatet_left(node);

    if(balance > 1 && key > node ->left->key)
    {
        node->left=rotate_lwft(node->left);
        return rotate_right(node);
    }

    if(balance < -1 && key < node->right->key)
    {
        node->right=rotate_rught(node->right);
        return roatet_left(node);
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

int main(void)
{

    AVLNODE *root=NULL;
    root=insert(root,10);
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,40);
    root=insert(root,50);
    root=insert(root,20);
    printf("전위 순회 결과 \n");
    preorder(root);
    return 0;
}


