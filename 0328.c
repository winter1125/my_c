#include <stdio.h>
#include <stdlib.h>

int main()
{
    freopen("input.txt","r",stdin);
    char arr[1000];
    gets(arr);

    for(int i=0; arr[i]!= NULL; i++)
    {
        printf("%c", arr[i]+2);

    }
    printf("\n");
    for(int i=0; arr[i]!= NULL; i++)
    {
        printf("%c", (arr[i]*7)%80+48);

    }

}
