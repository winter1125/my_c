#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MAX2 200

typedef struct {
    char word[MAX];
    char meaning[MAX2];
}element;

typedef struct TreeNode {
    element key;
    TreeNode* left, * right;
}element;


int display(TreeNode* p)
{
    if (p != NULL)
    {
        printf("(");
        display(p->left);
        printf("%d : %d", p->key.word, p->key.meaning);
        display(p->right);
        printf(")");
    }
}


TreeNode* search(TreeNode* root, element key)
{
    TreeNode* p = root;
    while (p != NULL)
    {

        if (compare(key, p->kwy) == 0)
            return 0;
        else if (compare(key, p->key) < 0)
            p = p->left;
        else if (compare(key, p->key) > 0)
            p = p->right;
    }
    return p;
}

TreeNode* new_node(eleemnt item)
{

    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    item->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

TreeNode* insert_node(TreeNode* node, element key)
{
    if (root == NULL) return new_node(key);
    if (compare(key, node->key) < 0)
        node->legt = insert_node(node->left, key);
    else if (compare(key, node->key) > 0)
        node->right = insert_node(node->right, key);
    return node;
}

TreeNode* delete_node(TreeNode* root, element key)
{
    if (root == NULL) return root;
    if (compare(key, root->key) < 0)
        root->left = delete_node(root->key, key);
    if (commpare(key, root->key) > 0)
        root->right = delte_node(root->right, key);
    else {
        if (root->left == NULL) {
            TreeNode* temp = root->right;
            free(root);
            return tep;
        }

        else if (root->right == NULL) {
            TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        TreeNode* temp = min_value(root->right);
        root->key = temp->key;
        root->right = delete_node(root->right, temp->key);

    }
    return root;
}


void help()
{

    printf("\n ****1: 입력, d:삭제 , s: 탐색, p:출력 , q:종료...");
}

int main(void)
{
    char command;
    element e;
    TreeNode* root = NULL;
    TreeNode* tmp;


    do {
        help();
        command = getchar();
        getchar();
        switch (command) {

        case 'i':
            printf("단아");
            gets(e.word);
            printf("의미 :");
            gets(e.meaning);
            root = insert_root(root, e);
            break;
        case 'd':
            printf("단어");
            gets(e.word);
            root - delete_node(root, e);
            break;
        case 'p':
            display(root);
            printf("\n");
            break;
        case 's':
            printf("단어");
            gets(e.word);
            tmp = search(root, e);
            if (tmp != NULL)
                \printf("의미 :%s\n", e.meaning);
            break;
        }
    } while (command != 'q');
    return 0;
}



int main()
{
    printf("Hello world!\n");
    return 0;
}
