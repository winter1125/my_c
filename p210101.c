#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
#define MAX 50


typedef struct GraphNode{
    int vertex;
    struct GraphNode *link;
}GraphNode;


typedef struct GraphType{
    int n;
    GraphNode *adj_list[MAX];
}GraphType;


void graph_init(GraphType *g){
    int v=0;
    g->n=0;
    for(v=0; v<MAX; v++)
    g->adj_list[v]=NULL;
}


void insert_vertex(GraphType *g, int v){

    if(((g->n)+1) > MAX ){
        printf("정점의 개수 초과 ");
        return;
    }
    g->n++;
}


void insert_edge(GraphType *g, int u, int v)
{

    GraphNode *node;
    if(u >= g->n || v>= g->n)
    {
        printf("그래프 정점 번호 오류 ");

    }

    node=(GraphNode*)malloc(sizeof(GraphNode));
    node->vertex=v;
    node->link=g->adj_list[u];
    g->adj_list[u]=node;

}

typedef int element;

typedef struct{
    element stack[MAX];
    int top;
}StackType;

void init(StackType *s){
    s->top=-1;
}


int is_empty(StackType *s){

    return(s->top==-1);

}



int is_full(StackType *s)
{

    return (s->top == (MAX -1));
}


void push(StackType *s, element item)
{


    if(is_full(s)){
            printf("스택 포화 에러 ");
            return;

    }
    else
        s->stack[++(s->top)]=item;
}

//삭제한수
element pop(StackType *s)
{
    if(is_empty(s)){
        printf("스택 공백 에러 \n");
        exit(1);
    }
    else return s->stack[(s->top)--];
}


int topo_sort(GraphType *g)
{
    int i;
    StackType s;
    GraphNode *node;

    int *in_degree=(int*)malloc(g->n * sizeof(int));
    for(i=0; i<g->n; i++)
        in_degree[i]=0;
    for(i=0 ;i<g->n;i++){
        GraphNode *node= g->adj_list[i];
        while(node != NULL){
            in_degree[node->vertex]++;
            node=node->link;

        }
            }


init(&s);
for(i=0; i<g->n; i++){
    if(in_degree[i]==0) push(&s, i);
}

while(!is_empty(&s)){

    int w;
    w=pop(&s);
    printf("정점 %d ->", w);
    node = g->adj_list[w];

    while(node != NULL){

        int u=node->vertex;
        in_degree[u]--;
        if(in_degree[u]==0) push(&s, u);
            node=node->link;
    }
}

free(in_degree);
printf("\n");
return(i == g->n);
}



void main(void){

    GraphType g;

    graph_init(&g);
    insert_vertex(&g,0);
    insert_vertex(&g,1);
    insert_vertex(&g,2);
    insert_vertex(&g,3);
    insert_vertex(&g,4);
    insert_vertex(&g,5);

    insert_edge(&g,0,2);
    insert_edge(&g,0,3);
    insert_edge(&g,1,3);
    insert_edge(&g,1,4);
    insert_edge(&g,2,3);
    insert_edge(&g,2,5);
    insert_edge(&g,3,5);
    insert_edge(&g,4,5);
    topo_sort(&g);
    return 0;
}












