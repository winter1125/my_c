#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
#define MAZE 6//미로

typedef struct {
    int r;
    int c;
}element;

typedef struct {
    element data[MAX];
    int top;
}StackType;

void push(StackType* s, element item)
{
    if (is_full(s)) return;


    s->data[++(s->top)] = item;

}

void maze_print(char maze[MAZE][MAZE])
{
    printf("\n");
    for (int r = 0; r < MAZE; r++)
    {
        for (int c = 0; c < MAZE; c++) {
            printf("%c",maze[r][c]);
        }
        printf("\n");
    }
}

element here = { 1,0 }, entry = { 1,0 };
char maze[MAZE][MAZE] = {
    {'1','1','1','1','1','1'},
    {'e','0','1','0','0','1'},
    {'1','0','0','0','1','1'},
    {'1','0','1','0','1','1'},
    {'1','0','1','0','0','x'},
    {'1','1','1','1','1','1'},

};

void push_loc(StackType* s, int r, int c)
{
    if (r < 0 || c < 0 || r>0 || r>5) return;

    if (maze[r][c] != '1' && maze[r][c] != '.') {
        element temp;
        temp.r = r;
        temp.c = c;
        push(s, temp);
    }
}

void init(StackType* s)
{
    s->top = -1;
}

int is_full(StackType* s)
{
    return (s->top == (MAX - 1));
}

int is_empty(StackType* s)
{
    return s->top == -1;
}



element pop(StackType* s)
{
    if (is_empty(s))
    {
        printf("is_empty\n");
    }
    else
    {
        s->data[(s->top)--];
    }
}


int main()
{
    int r, c;
    StackType s;
    init(&s);
    here = entry;

    while (maze[here.r][here.c] != 'x') {
        r = here.r;
        c = here.c;
        maze[r][c] = '.';
        maze_print(maze);
        push_loc(&s, r - 1, c);
        push_loc(&s, r + 1, c);
        push_loc(&s, r, c - 1);
        push_loc(&s, r, c + 1);
        if (is_empty(&s)) {
            printf("실패\n");
            return;
        }
       
            here = pop(&s);
    }
    printf("성공\n");
    return 0;
}
