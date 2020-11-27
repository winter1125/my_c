#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef int element;

typedef struct ListNode{
    element data;
    struct ListNode *link;
}ListNode;

ListNode* insert_first(ListNode *head, element data)
{
    ListNode *p=(ListNode *)malloc(sizeof(ListNode));
    p->data=data;
    p->link=head;
    head=p;
    return head;
}

ListNode* search_list(ListNode *head, element x)
{

    ListNode* p=head;

    while(p!=NULL){
        if(p->data == x) return p;
        p=p->link;
    }
    return NULL;
}


void print_list(ListNode *head){

    //ListNode *p;
    for(ListNode *p=head; p!=NULL;p=p->link)
        printf("%d->",p->data);
    printf("NULL\n");

}

int main(void){

    int word;

    //freopen("input.txt","r",stdin);
    ListNode *head=NULL;
    head=insert_first(head,10);
    print_list(head);


    head=insert_first(head,20);
    print_list(head);


    head=insert_first(head,30);
    print_list(head);

    //scanf("%d", &word);
    if(search_list(head, word)!=NULL)
        printf("find %d/n",30);
    else
        printf("unfind  %d", 30);
    return 0;

}
