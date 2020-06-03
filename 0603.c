#include <stdio.h>
#include <stdlib.h>

void func(int *a, int b, int *c)
{
    int x;
    x=*a;
    printf("\n x=%d\n", x);
    *a=x++;
    x=b;
    b=++x;
    --(*c);
}

int main()
{
    int a,b, c[1];
    a=10;
    b=20;
    c[0]=30;
    func(&a,b,c);
    printf("a=%d b=%d c=%d\n",a,b,*c);
    return 0;
}
