#include <stdio.h>
#include <stdlib.h>

void h_t(int n, char from, char temp, char to)
{

    if(n==1) printf("���� 1�� %c���� %c�� \n", from, to);
    else
    {
        h_t(n-1, from, to, temp);
        printf("���� %d�� %c���� %c�� �ű��\n", n,from, to);
        h_t(n-1, temp, from, to);
    }

}
int main()
{
    h_t(4,'A','B','C');
}
