#include <stdio.h>
#include <stdlib.h>

void add(int *a, int *b)
{
    *a=*a+*b; //A=16

}

void sub(int *a, int *b)
{
    *b=*a-*b; //B=16-4=12
}

void pp(void (*pf)(int *, int *), int *x, int *y)
{
    (*pf)(x,y);
}
void main()
{
    int a=100;
    int b=40;

    pp(add, &a, &b);
    printf("a=%d b=%d\n", a,b);
    a=12;
    b=4;
    printf("a=%d b=%d\n", a, b);

}
