#include<stdio.h>
#include<stdlib.h>

typedef struct TreeNode{
    int data;
    struct TreeNode *left, *right;
}TreeNode;


int cal(TreeNode *root)
{

    int left_sum;
    int right_sum;
    if(root==NULL) return 0;

    /*
    left_sum=cal(root->left);
    right_sum=cal(root->right);

    return (root->data+left_sum+right_sum);

*/

  return (root->data+cal(root->left)+cal(root->right));

}


int main(void){
    TreeNode n4={500,NULL,NULL};
    TreeNode n5={200,NULL,NULL};
    TreeNode n3={100,&n4,&n5};
    TreeNode n2={50,NULL,NULL};
    TreeNode n1={0,&n2,&n3};

    printf("µð·º =%d\n", cal(&n1));





}
