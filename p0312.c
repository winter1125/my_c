#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* link;

}node;

node* insert_first(node* head, int data)
{
    node* p= (node*)malloc(sizeof(node));
    p->data=data;
    p->link=head;
    head=p;
    return head;
}

void print(node* head)

{
    for(node *p=head; p!=NULL; p=p->link)
                printf("%d->", p->data);
    printf("NULL\n");

}

node* reverse(node* head)
{
    node *p, *q, *r;
    p=head;
    q=NULL;
    while(p!=NULL)
    {
    r=q;
    q=p;
    p=p->link;
    q->link=r;
    }
    return q;

}

int main()
{
   node* head1=NULL;
   node* head2=NULL;

  for(int i=10; i<=30; i+=10)
  {
      head1=insert_first(head1,i );
  }
  print(head1);

  head2=reverse(head1);
  print(head2);
  return 0;
}
