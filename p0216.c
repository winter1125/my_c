#include <stdio.h>
#include <string.h>

void ht(int n, char from, char tmp, char to)
{
    if(n==1) printf("원판1을 %c에서 %c로 옮긴다",from, to);
    else{
        ht(n-1, from, to, tmp);
        printf("원판 %d을 %c에서 %c로 옮긴다 ", from, to);
        ht(n-1, tmp,from,to);

    }


}


int main(void)
{
    ht(4,'A','B','C');
    return 0;
}
