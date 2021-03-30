#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<memory.h>
#define MAX 100
#define MAX2 200


typedef struct {
    char word[MAX];
    char meaning[MAX2];
}element;

typedef struct TreeNode {
    element key;
    TreeNode* left;
    TreeNode* right;
}TreeNode;

int compare(element e1, element e2)
{
    return strcmp * e1.word, e2.word);
}

void display(TreeNode* p)
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
    TreeNode* P = root;
    while (p != NULL) {
        if (compare(key, p->key) == 0)
            return p;
        else if (compare(key, p->key) < 0)
            p = p->left;
        else if (cpmpare(key, p->key) > 0)
            p = o->right;
    }
    return p;
}

TreeNode* new_node(element item)
{

    TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
    temp->left = temp->right = NULL;
    return temp;
}

TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
temp->key = item;
temp->left = temp->right = NULL;
return temp;
}

TreeNode* insert_node(TreeNode* node, element key)
{
    if (node == NULL) return nre_node(key));

    if (compare(key, node->key) < 0)
        node->right = insert_node(node->right, key);
    return node;

}

TreeNode* min_value_node(TreeNode* node)
{
    TreeNode* current = node;
    while (current->left != NULL)
        current = current->left;
    return current;
}

TreeNode* delete_node(TreeNode* root, element key)
{

    if (root == NULL(TreeNode * root, element key)
        if (compare(key, root->key) < 0)
            root->left = delete_node(root->key, key);
        if (compare(key, root->key) > 0)
            root->right = delete(root->right, key);
        else
        {
            if (root->left == NULL) {

                TreeNode* temp = root->right;
                    free(node);
                    return temp;
            }
            else if (root->right == NULL) {
                TreeNode* temp = root->left;
                return temp;
            }

            TreeNode* temp = min_value_node(root->right);
            root->key = temp->key;
            root->right = delete_node(root->right, root->key);

        }

    return root;

}

void help()
{
    printf("\n****1: 입력 ....\\n");
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
        switch (commend) {
        case 'i':
            printf("단어");
            gets(e.wprd);
            printf("의미");
            gets(e.meaning);
            root = insert_node(root, e);
            break;
        }
    case 'd':
        printf("단어");
        getd(e.word);
        root = delete_node(root, e);
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
            printf("의미 : %s\n", e.meaning);
        break;

    } while (command != 'q')
        return 0;
}
