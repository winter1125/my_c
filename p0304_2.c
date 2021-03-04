#include<stdio.h>
#include<string.h>
#define MAX 5

typedef struct{
    int data[MAX];
    int front;
    int rear;
}QueueType;

void error(char *message)
{
    printf("error");
    exit(1);
}

void init(QueueType *q)
{

    q->rear=-1;
     q->front=-1;
}

void q_print(QueueType *q)
{
    for(int i=0;i<MAX;i++)
    {
        if(i<=q->front || i > q->rear)
          printf(" | ");
        else
            printf("%d | ", q->data[i]);
    }
    printf("\n");
}

int is_full(QueueType *q)
{
    if(q->rear==(MAX-1)) return 1;
    else
        return 0;
}

int is_empty(QueueType *q)
{
    if(q->rear==q->front) return 1;
    else
        return 0;
}

void enqueue(QueueType *q, int item)
{
    if(is_full(q)){
        printf("queue full\n");
       return;
    }
    q->data[++(q->rear)]=item;
}

int dequeue(QueueType *q)
{
    if(is_empty(q)){
        printf("Queue_empty\n");
        return -1;
    }
    int item= q->data[++(q->front)];
    return item;
}

int main()
{
    int item=0;
    QueueType q;

    init(&q);
    enqueue(&q,10);q_print(&q);
    enqueue(&q,20);q_print(&q);
    enqueue(&q,30);q_print(&q);

    item=dequeue(&q); q_print(&q);
    item=dequeue(&q);q_print(&q);
    item=dequeue(&q);q_print(&q);
    return 0;
}
