#include <stdio.h>
#include <stdlib.h>
#define MAX 50
typedef struct GraphType {
    int n;
    int adj_mat[MAX][MAX];
}GraphType;

void init(GraphType* g)
{

    int r, c;
    g->n = 0;
    for (r = 0; r < MAX; r++)
        for (c = 0; c < MAX; c++)
            g->adj_mat[r][c] = 0;
}

void insert_vertex(GraphType* g, int v)
{
    if (((g->n) + 1) > MAX) {
        printf("overflow");
        return;
    }
    g->n++;
}

void insert_edges(GraphType* g, int start, int end)
{
    if (start >= g->n || end >= g->n)
    {
        printf("그래프 : 정점번호 오류 ");
        return;
    }
    g->adj_mat[start][end] = 1;
    g->adj_mat[end][start] = 1;


}


void print_adj_mat(GraphType* g)
{
    for (int i = 0; i < g->n; i++)
    {
        for (int j = 0; j < g->n; j++) {
            printf("%2d", g->adj_mat[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    GraphType* g;
    g = (GraphType*)malloc(sizeof(GraphType));
    init(g);
    for (int i = 0; i < 4; i++)
        insert_vertex(g, i);
    insert_edges(g, 0, 1);
    insert_edges(g, 0, 2);
    insert_edges(g, 0, 3);
    insert_edges(g, 1, 2);
    insert_edges(g, 2, 3);

    print_adj_mat(g);
    free(g);

    //printf("Hello world!\n");
    //return 0;
}
