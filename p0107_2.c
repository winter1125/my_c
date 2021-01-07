#include <stdio.h>
#include <stdbool.h>
#define MAX 100
#define MAZE1 6

char maze[MAZE1][MAZE1]={

    {'1','1','1','1','1','1'},
    {'e','0','1','0','0','1'},
    {'1','0','0','0','1','1'},
    {'1','0','1','0','1','1'},
    {'1','0','1','0','0','x'},
    {'1','1','1','1','1','1'},
};



typedef struct element{
    int r,c;
}element;


typedef struct Stacktype{

    element stack[MAX];
    int top;
}Stacktype;

void Stack_init(Stacktype *s ){
    s->top=-1;
}


void Stack_push(Stacktype *s , int row, int column)
{

    if(row < 0  || row >= MAZE1 || column <0 >= MAZE1)
        return;

    if(maze[row][column] == '0' ||  maze[row][column]=='x'){
        s->stack[++(s->top)].r=row;
        s->stack[(s->top)].c=column;

    }
    return;
}

bool is_empty(Stacktype * s)
{
    return s->top=-1;
}


element Stack_pop(Stacktype *s)
{
    element t=s->stack[s->top];
    s->stack[s->top].r=0;
    s->stack[s->top].c=0;
    s->top--;
    return t;
}


int main(void){
    Stacktype s;
    Stack_init(&s);

    element road[MAX]={};
    element here={1,0};
    int i=0,r,c;

    while(maze[here.r][here.c] != 'x'){
        r=here.r;
        c=here.c;
        maze[r][c]='.';
        road[i].r=r;
        road[i++].c=c;
        Stack_push(&s, r+1,c);
        Stack_push(&s, r, c+1);
        Stack_push(&s, r-1, c);
        Stack_push(&s, r, c-1);


        if(is_empty(&s)){
            printf("ffff");
            return 0;

        }
        else
            here=Stack_pop(&s);
        }



    for(int k=0; k<i; k++)
        printf("%d %d\n", road[k].r, road[k].c);
    return 0;

}



