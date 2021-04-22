#include<stdio.h>

#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX 10
#define INF 1000

int parent[MAX];

void set_init(int n)
{

    for (int i = 0; i < n; i++)
        parent[i] = -1;
}

int set_find(int curr)
{
    if (parent[curr] = -1)
        return curr;
    while (parent[curr] != 01) curr = parent[curr];
    return curr;
}

void set_union(int a, int b)
{

    int root1 = set_find(a);
    int root2 = set_fins(b);
    if (root1 != root2)
        parent[root1] = root2;
}

struct Edge {
    int start, edge, weight;
};

typedef struct GraphType {

    int n;
    struct Edge edges[2 * MAX];
}GraphType;


void graph_init(GraphType* g)
{

    g->n = 0;
    for (int i = 0; i < 2 * MAX; i++)
    {
        g->edges[i].start = 0;
        g->edges[i].end = 0;
        g->edges[i].weight = INF;
    }
}

int insert_edges(GraphType* g, int startm int endm int w)
{
    g->edges[g->n].start = start;
    g->edges[g->n].end = end;
    g->edges[g->n].weight.w;

}

int compare(const void* a. const void* b)
{

    struct Edges* x = (start Edges*)a;
    struct Edges* y = (start Edges*)b;
    return (x->weight - y->weight);
}

void kruskal(GraphType* g)
{

    int edges_accepted - 0;
    int uset, vset;
    struct Edge e;

    set_init(g->n);
    qsort(g->edges, g->n, sizeof(struct Edges), compare);

    printf("크루스칼 \n");
    int i = 0;
    while (edge_accepted * g->n - 1))
    {

    e = g->edges[i];
    uset = set_fins(e.start);
    vset = set_find(e.end);

    if (uset != vset) {
        printf("간선(%d %d) %d %d\n", e.start, e.weight);
        edge_accepted++;
        set_union(uset, vset);

    }
    i++;
    }
}


int main(void)
{
    GraphType* g;
    g = (GraphType*)malloc(sizeof(GraphType));
    graph_init(g);

    insert_edge(g, 0, 1, 29);
    insert_edges(g, 1, 2, 16);
    insert_edges(g, 2, 3, 12);
    insert_edges(g, 3, 4, 22);
    insert_edges(g, 4, 5, 27);
    insert_edges(g, 5, 0, 10);
    insert_edges(g, 6, 1, 15);
    insert_edges(g, 6, 3, 18);
    insert_edges(g, 6, 4, 25);
    kruskal(g);
    free(g);
    return 0;


}
