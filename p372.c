#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct GraphicType{
    int n;
    int adj_mat[MAX][MAX];
}GraphicType;


void init(GraphicType *g)
{

    int r,c;
    g->n=0;
    for(r=0; r<MAX;r++)
        for(c=0; c<MAX;c++)
        g->adj_mat[r][c]=0;
}


void insert_vertex(GraphicType *g, int v)
{
    if(((g->n)+1)>MAX){
        printf("개수 초과 ");
        return;
    }
    g->n++;
}


void insert_edge(GraphicType *g, int start, int end)
{
    if(start >= g->n || end >= g->n){
        printf("그래프: 정점 번호 오류 ");
        return;
    }

    g->adj_mat[start][end]=1;
    g->adj_mat[end][start]=1;
}


void print_adj_mat(GraphicType * g)
{
    for(int i=0; i<g->n; i++){
        for(int j=0; j<g->n; j++){
        printf("%d", g->adj_mat[i][j]);
}
printf("\n");
 }
}


void main(){
GraphicType *g;

g=(GraphicType *)malloc(sizeof(GraphicType));
init(g);
for(int i=0; i<4; i++)
    insert_vertex(g,i);
insert_edge(g,0,1);
insert_edge(g,0,2);
insert_edge(g,0,3);
insert_edge(g,1,2);
insert_edge(g,2,3);
print_adj_mat(g);
free(g);
}
