#include <stdio.h>
#include <stdlib.h>
#define  MAX 10000

int main(void)
{

    char c, * cptr1, * cptr2;
    int i, * iptr1, * iptr2;
    double d, * dptr1, * dptr2;

    cptr1 = &c;
    iptr1 = &i;
    dptr1 = &d;
    cptr2 = cptr1 + 1;
    iptr2 = iptr1 + 1;
    dptr2 = dptr1 + 1;

    printf("%d %d %d, ", cptr2 - cptr1, iptr2 - iptr1, dptr2 - dptr1);
    printf("%d %d %d\n", (int)cptr2 - (int)cptr1, (int)iptr2 - (int)dptr1, (int)iptr2 - (int)dptr1);
}

