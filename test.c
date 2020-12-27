#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a;
    char s[10];
   scanf("%s", s);
   a=atoi(s);
    printf("10진수 =%d\n", a);
    printf("8진수 = %o\n", a);
    printf("16진수 = %x\n", a);

}
