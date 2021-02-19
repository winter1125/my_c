#include <stdio.h>
#include <stdlib.h>

int n;
char arr[8];

int dfs(int num)
{

    for(int i=1; i<=2; i++)
    {
        if(i==1){ arr[num]='O';}
        else
        {
            arr[num]='X';
        }

        if(num==n){
            for(int j=1;j<=n;j++)
                printf("%c ", arr[j]);

        }
        printf("\n");

    }
}
int main()
{
    n=1;
    dfs(1);
}
