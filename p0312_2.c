#include <stdio.h>
#include <stdlib.h>

int main()
{
typedef struct ListNode{
       int coef;
       int expon;
       struct ListNode *link;
  }ListNode;

typedef struct ListType{
      int size;
      ListNode *head;
      ListNode *tail;
  }ListType;


ListType* create(){
    ListType *plist=(ListType *)malloc(sizeof(ListType));
    plist->size=0;
    plist->head=plist->tail==NULL;
    return plist;
}

void insert_last(LisrTypw* plist, int coef, int expon)
{

    ListNode * temp=(ListNode*)malloc(sizeof(ListNode));
    if(temp==NULL)printf("error\n");
    temp->coef=coef;
    temp->expon=expon;
    temp->link=NULL;
    if(plist->tail ==NULL){
        plist->head=plist->tail=temp;
    }
    else{
        plist->tail->tail=temp;
        plist->tail=temp;
         }
     plist->size++;
}

void poly_add(ListNode plist, ListNode* plist, ListNode* plist2)
{

    ListNode* a=plist->head;
    ListNode* b=plist->head;
    int sum;

    while(a&&b){
        if(a->expon == b->expon){
            sum=a->coef+b->coef;
            if(sum !=0) insert_last(plist3, sum, a->expon);
            a=a->link; b=b->link;
             }
         else if(a->expon > b->expon){
            insert_last(plist3, a->coef, a->expon);
            a=a->link;
         }
         else{
            insert_last(plist. b->coef, b->expon);
            b=b->link;

         }

    }
    for(; a!=NULL; a=a->link)
        insert_last(plist3, a->coef, a->expon);
    for(;b!=NULL;b=b->link)
        insert_last(plist3, b->coef, b->expon);
}

void poly_print(ListType * plist)
{

    ListType * p=plist->head;
    print("ploynomia =");
    for(; p; p->link){
        printf("%d\n +", p->coef, p->expon);

    }
    printf("\n");
}

int main()
{
    ListType *list, *list2, *list3;

    list1=create();
    list2=create();
    list3=create();
    insert_last(list1,3,12);
    insert_last(list1, 2, 8);
    insert_last(list1,1,0);

    insert_last(list2, 8,12);
    insert_last(list2, -3, 10);
    insert)last(list2,10,6);

    poly_print(list1);
    poly_print(list2);

    poly_ass(list1, list2, list3);
    poly_print(list3);

    free(list1); free(list2); free(list3);
}

