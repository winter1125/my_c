#include<stdio.h>
#include<stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct {
    element data[MAX_QUEUE_SIZE];
    int front,rear;
    }QueueType;

void error(char *message)
{

    printf("%s\n", message);
    exit(1);
}

void init_queue(QueueType *q)
{
    q->front=q->rear=0;
}

int is_empty(QueueType *q)
{
    return (q->front==q->rear);
}

int is_full(QueueType *q)
{
    return ((q->rear+1)% MAX_QUEUE_SIZE == q->front);
}

void queue_print(QueueType *q)
{
    printf("QUEUE(front = %d rear=%d)= ", q->front,q->rear);
    if(!is_empty(q)){
       int i=q->front;
       do{
        i=(i+1)%(MAX_QUEUE_SIZE);
        printf("%d | ", q->data[i]);
        if(i==q->rear)
            break;
       }while(i != q->front);
       }
       printf("\n");
}

void enqueue(QueueType *q, element item){
    if(is_full(q))
        error("full");
    q->rear=(q->rear+1)% MAX_QUEUE_SIZE;
    q->data[q->rear]=item;

}

element dequeue(QueueType *q)
{
    if(is_empty(q))
      printf("empty queue");
    q->front=(q->front+1)% MAX_QUEUE_SIZE;
    return q->data[q->front];

}


element peek(QueueType *q)
{
    if(is_empty(q))
        error("queue empty");
    return q->data[(q->front+1)]%MAX_QUEUE_SIZE;

}

int main(void)
{

//freopen("input.txt","r",stdin);

    QueueType queue;
    int element;

    init_queue(&queue);
    printf("--data input--\n");

    while(!is_full(&dequeue)){

        //printf("input ����=?");
        scanf("%d", &element);
        enqueue(&queue,element);
        queue_print(&queue);
    }

    printf("ť�� ��ȭ�����Դϴ�\n");

    printf("--����Ÿ �����ܰ� ---\n");

    while(!is_empty(&queue)){
        element =dequeue(&queue);
        printf("������ ���� :%d \n", element);
        queue_print(&queue);
    }
    printf("ť�� ��������Դϴ�\n");
    return 0;

}



