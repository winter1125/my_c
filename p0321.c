#include <stdio.h>
#include <stdlib.h>

int f(int a, int b)
{
    if (a <= 0)
        return b;
    else f(a - 1, b * 2) + b;
}

int main()
{
    printf("%3d\n", f(8, 2));
}
