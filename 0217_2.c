#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=2; i<=9;i++)
    {
        for(int j=1;j<=9;j++)
        {
            if(i*j==n && j>=i) printf("%d %d",i,j);
             else

        continue;
       }

}

printf("wrong number");
}

