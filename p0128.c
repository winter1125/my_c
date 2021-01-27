#include <stdio.h>
#include <stdlib.h>

int transform(char *key)
{

    int number=0;
    while(*key)
        number=number+*key++;
    return number;
}

int transform31(char *key)
{

    int number=0;
    while(*key)
        number=31*number+*key++;
    return number;
}

int main()
{
    char *ptr="for";
    printf("원본 키 = %s\n", ptr);
    printf("31안 곱한거 결과=%d\n ", transform(ptr));
    printf("31곱한거 결과=%d ", transform31(ptr));
    return 0;
}
