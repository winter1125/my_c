#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef int element;

typedef struct{
    element data[MAX];
    int front, rear;
}QueueType;

void error(char *message){



}

void init_queue(QueueType *q)
{
    q->front=q->rear=0;

}

int is_empty(QueueType *q)
{
    return (q->front== q->rear);
}

int is_full(QueueType *q)
{

    return ((q->rear+1) % MAX==q->front);
}

//����ť ��� �Լ�

void queue_print(QueueType *q)
{
    printf("Queue(front=%d rear=%d)= ", q->front, q->rear);

    if(!is_empty(q)){
        int i=q->front;
        do{
            i=(i+1)%MAX;
            printf("%d | ", q->data[i]);
            if(i == q->rear)
                break;
            }while(i != q->front);

    }
    printf("\n");

}

void enqueue(QueueType *q, element item)
{
    if(is_full(q))
        error("ť�� ��ȭ���� ");
    q->rear=(q->rear+1)%MAX;
    q->data[q->rear]=item;

}

element dequeue(QueueType *q)
{
    if(is_empty(q))
        error("ť�� ��������Դϴ� ");
    q->front = (q->front+1)% MAX;
    return q->data[q->front];
}

element peek(QueueType *q)
{
    if(is_empty(q))
        error("ť�� ����");
    return q->data[(q->front+1)%MAX];

}



int main()
{
    QueueType queue;
    int element;

    init_queue(&queue);
    printf("data input\n");
    while(!is_full(&queue))
    {
        printf("������ �Է��Ͻÿ� ");
        scanf("%d", &element);
        enqueue(&queue, element);
        queue_print(&queue);
    }

    printf("ť�� ��ȭ�����Դϴ� \n");
    printf("����Ÿ ���� �ܰ� \n");

    while(!is_empty(&queue))
    {

        element = dequeue(&queue);
        printf("������ ���� = %d\n", element);
        queue_print(&queue);
    }
    printf("ť�� ������� �Դϴ� \n");
    return 0;
}
