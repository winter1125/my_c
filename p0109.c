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

//원형큐 출력 함수

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
        error("큐가 포화상태 ");
    q->rear=(q->rear+1)%MAX;
    q->data[q->rear]=item;

}

element dequeue(QueueType *q)
{
    if(is_empty(q))
        error("큐가 공백상태입니다 ");
    q->front = (q->front+1)% MAX;
    return q->data[q->front];
}

element peek(QueueType *q)
{
    if(is_empty(q))
        error("큐가 공백");
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
        printf("정수를 입력하시오 ");
        scanf("%d", &element);
        enqueue(&queue, element);
        queue_print(&queue);
    }

    printf("큐는 포화상태입니다 \n");
    printf("데이타 삭제 단계 \n");

    while(!is_empty(&queue))
    {

        element = dequeue(&queue);
        printf("꺼내진 정수 = %d\n", element);
        queue_print(&queue);
    }
    printf("큐는 공백상태 입니다 \n");
    return 0;
}
