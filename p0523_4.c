#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max(a,b)(a)

int result(int, int*, int*);

void main() {
    int ara[3], arb[3], i, a, b;
    for (i = 0; i < 3; i++)
        ara[i] = arb[i] = i;

    while (--i > 0) {

        a = result(i, &ara[i], &arb[i]);
        b = result(i, &arb[i], &ara[i]);
        printf("i=%d, a= %d, b=%d\n", i, a, b);
    }

    printf("i=%d, a=%d, b=%d \n", i, a, b);

}

int result(int x, int* a, int* b)
{

    return  x = *a = *b + x;
}
