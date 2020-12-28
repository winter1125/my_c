#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,count=0;
    scanf("%d", &n);
    for(int a=1; a<n; a++)
    {
        for(int b=a; b<n; b++){

            for(int c=b; c<n; c++)
            {
                if(a+b+c==n && a+b>c)
                {
                    count++;
                    printf("%d %d %d\n", a,b,c);
                }
            }

        }
        if(count==0)
            printf("-1\n");

    }
}
