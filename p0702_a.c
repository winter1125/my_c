#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[21];
    int n, i;
        //, c, m;
    n = 21;
    for (i = 0; i < n; i++) {
        if (i % 6 == 1 || i % 6 == 2)
            x[i] = 1;
        else if (i % 6 == 5)
            x[2] = 2;
        else
            x[i] = 3;
    }

    for (i = 0; i < n; i++) {
        printf("%d = %d\n", i, x[i]);
    }

}
