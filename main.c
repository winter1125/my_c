#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num1[1000];
    int i,j,sum=0;
    int temp;
    scanf("%s", num1);

    for(int i=0; i<strlen(num1)/2;i++)
    {
        temp=num1[i];
        num1[i]=num1[strlen(num1)-i-1];
        num1[strlen(num1)-i-1]=temp;
    }


    for(int i=0; i<strlen(num1);i++)
    {
        printf("%c ", num1[i]);
    }
}
