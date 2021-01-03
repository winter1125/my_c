#include <stdio.h>
#include <stdlib.h>

int count=0;

void ht(int n, char from, char tmp, char to)
{
    if(n==1) printf("원판 1을 %c에서 %c로 옮긴다 \n", from, to);

    else{
        ht(n-1, from, to, tmp);
        printf("원 판 %d를 %c에서 %c로 옮긴다 \n",n, from, to);
        ht(n-1, tmp, from, to);
    }
}

int main(void)
{
    ht(4,'A','B','C');
    return 0;
}
