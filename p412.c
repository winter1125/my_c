#include<stdio.h>
#include<stdio.h>

#define TRUE 1
#define FALSE 0

#define MAX 100
#define INF 1000

typedef struct GraphType{
    int n;
    int weight[MAX][MAX];

}GraphType;

int selected[MAX];
int distance[MAX];

int get_min_vertex(int n)
{

    int v,i;
    for(i=0; i<n; i++)
    if(!selected[i]){
        v=i;
        break;
    }

    for(i=0; i<n; ++i)
        if(!selected[i] && (distance[i] < distance[v])) v=i;
    return(v);
}
