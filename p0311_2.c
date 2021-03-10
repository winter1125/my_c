#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    int data;
    struct ListNode* link;
}ListNode;


ListNode* insert_first(ListNode* head, int data)
{
    ListNode* p = (ListNode*)malloc(sizeof(ListNode));
    p->data = data;
    p->link = head;
    head = p;
    return head;
}

void print_list(ListNode* head)
{
    for (ListNode* p = head; p != NULL; p = p->link)
        printf("%d ", p->data);
    printf("\n");
}

ListNode* reverse(ListNode* head)
{

    ListNode* p, * q, * r;
    p = head;
    q = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->link;
        q->link = r;

    }

    return q;

}

int main(void)
{

    ListNode* head1 = NULL;
    ListNode* head2 = NULL;

    for (int i = 10; i <= 30; i += 10)
    {
        head1 = insert_first(head1, i);
        print_list(head1);
    }

    head2 = reverse(head1);
    print_list(head2);
    return 0;
}