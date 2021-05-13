#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,t)((t)=(x), (x)=(y),(y)=(t))
#define max(a,b)(a)
#define SIZE 5

typedef struct AVLNODE {
    int key;
    struct AVLNODE* left;
    struct AVLNODE* right;

}AVLNODE;


int get_height(AVLNODE* node)
{

    int height = 0;
    if (node != NULL)
        height = 1 + max(get_height(node->left), get_height(node->right));
    return height;
}

int get_balance(AVLNODE* node)
{

    if (node == NULL) return 0;
    return get_height(node->left) - get_height(node->right);

}

AVLNODE* create_node(int key)
{
    AVLNODE* node = (AVLNODE*)malloc(sizeof(AVLNODE));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

AVLNODE* rotate_right(AVLNODE* parent)
{
    AVLNODE* child = parent->left;
    parent->left = child->right;
    child->right = parent;

    return child;
}

AVLNODE* rotate_left(AVLNODE* parent)
{
    AVLNODE* child = parent->right;
    parent->right = child->left;
    child->left = parent;
    return child;
}

AVLNODE* insert(AVLNODE* node, int key)
{
    if (node == NULL)
        return(create_node(key));

    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else
        return node;

    int balance = get_balance(node);

    if (balance > 1 && key < node->left->key)
        return rotate_right(node);
    else if (balance > 1 && key > node->left->key)
        return rotate_left(key);

    if (balance > 1 && key > node->left->key)
    {
        node->left = rotate_left(node->left);
        return rotate_right(node);
    }
    return node;
}

void preorder(AVLNODE* root)
{

    if (root != NULL)
    {
        printf("%d  ", root->key);
        preorder(root->left);
        preorder(root->right);
    }
}



void main()
{
    AVLNODE* root = NULL;
    root = insert(root, 10);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 29);

    printf("전위 순회 결과 \n");
    preorder(root);
    return 0;
}
