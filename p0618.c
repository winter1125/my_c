#include <stdio.h>
#include <stdlib.h>

void h_t(int n, char from, char temp, char to)
{

    if(n==1) printf("원판 1을 %c에서 %c로 \n", from, to);
    else
    {
        h_t(n-1, from, to, temp);
        printf("원판 %d를 %c에서 %c로 옮긴다\n", n,from, to);
        h_t(n-1, temp, from, to);
    }

}
int main()
{
    h_t(4,'A','B','C');
}
