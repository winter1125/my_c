#include<stdio.h>
#include<stdlib.h>

typedef struct ListNode{
    int data;
    struct ListNode *link;
}ListNode;

void print(ListNode* head)
{
    ListNode *p;

    if(head==NULL)return;
    p=head->link;
    do{
        printf("%d-> ", p->data);
        p=p->link;
         }while(p!=head);
     printf("%d->", p->data);

}

ListNode* insert_first(ListNode* head, int data)
{
    ListNode *node = (ListNode *)malloc(sizeof(ListNode));
    node->data=data;
    if(head==NULL){
        head=node;
        node->link=head;
    }
    else
    {
        node->link=head->link;
        head->link=node;
    }
    return head;

}

ListNode* insert_last(ListNode * head, int data)
{

    ListNode* node=(ListNode*)malloc(sizeof(ListNode));
    node->data=data;
    if(head==NULL){
        head=node;
        node->link=head;
}
else
{
    node->link=head->link;
    head->link=node;
    head=node;
}
return head;
}


int main(void)
{
    ListNode *head=NULL;

    head=insert_last(head, 20);
    head=insert_last(head, 30);
    head=insert_last(head, 40);
    head=insert_first(head, 10);
    print(head);
    return 0;

}
