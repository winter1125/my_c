#include<stdio.h>

#include<stdlib.h>

#define TRUE 1
#define FALSE 0
#define MAX 10


int main(void)
{
    int i = 10, j = 20;
    int* pa = &i, * pb = &j;
    *pa = *pb;
    pa = pb;

    printf("pa=%d pb=%d\n", pa, pb);
    printf("pa=%d pb=%d\n", *pa, *pb);

    return 0;

}
