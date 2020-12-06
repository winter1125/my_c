#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

#define MAX 50

typedef int element;

typedef struct {
    element queue[MAX];
    int front,rear;
 }QueueType;



 int is_empty(QueueType *q){

 return (q->front== q->rear);

 }
element dequeue(QueueType *q)
{
    if(is_empty(q))
       printf("큐가 공백");
    q->front=(q->front+1) % MAX;
    return q->queue[q->front];
}



typedef struct GraphicType{
    int n;
    int adj_mat[MAX][MAX];

}GraphType;

int visited[MAX];

void graph_init(GraphType* g)
{
    int r,c;
    g->n=0;
    for(r=0; r<MAX; r++)
        for(c=0; c<MAX; c++)
        g->adj_mat[r][c]=0;
}


void insert_vertex(GraphType *g, int v)
{

    if(((g->n)+1) > MAX){
    printf("그래프 : 정점 개수 초과 ");
    return ;

    }
    g->n++;
}


void insert_edge(GraphType *g, int start, int end)
{
    if(start >= g->n || end >= g->n){

        printf("그래프: 정점 번호 오류 ");
        return ;

    }
    g->adj_mat[start][end]=1;
    g->adj_mat[end][start]=1;
}

void queue_init(QueueType *q)
{
    q->front=q->rear=0;
}


void enqueue(QueueType *q, element item)
{

    q->rear=(q->rear+1) % MAX;
    q->queue[q->rear]=item;
}

void bfs_mat(GraphType* g, int v){

    int w;
    QueueType q;

    queue_init(&q);
    visited[v]=TRUE;
    printf("%d 방문 ->", v);
    enqueue(&q,v);
    while(!is_empty(&q)){
        v=dequeue(&q);
        for(w=0; w< g->n; w++)
        if(g->adj_mat[v][w] && !visited[w]){
            visited[w]=TRUE;
            printf("%d번 방문 ->", w);
            enqueue(&q,w);
        }

    }

}


int main(void)
{
    GraphType *g;
    g=(GraphType *)malloc(sizeof(GraphType));

    graph_init(g);

    for(int i=0;i<6; i++)
        insert_vertex(g,i);
    insert_edge(g,8,2);
    insert_edge(g,2,1);
    insert_edge(g,2,3);
    insert_edge(g,0,4);
    insert_edge(g,4,5);
    insert_edge(g,1,5);

    printf("너비 우선탐색 \n");
    bfs_mat(g,0);
    printf("\n");
    free(0);
    return 0;



}
