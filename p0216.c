#include <stdio.h>
#include <string.h>

void ht(int n, char from, char tmp, char to)
{
    if(n==1) printf("����1�� %c���� %c�� �ű��",from, to);
    else{
        ht(n-1, from, to, tmp);
        printf("���� %d�� %c���� %c�� �ű�� ", from, to);
        ht(n-1, tmp,from,to);

    }


}


int main(void)
{
    ht(4,'A','B','C');
    return 0;
}
