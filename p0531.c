// C program to insert a node in AVL tree
#include<stdio.h>
#include<stdlib.h>

typedef struct p{
int x,y;
}PT;

void cal(PT *x,PT *y,PT *z)
{
    z->x=x->x+y->x;
    z->y=x->y+y->y;
}

int main(){
PT p1={10,20},p2={30,40},p3={0,0};
cal(&p1,&p2,&p3);
printf("%d %d\n", p3.x,p3.y);
return 0;
}
