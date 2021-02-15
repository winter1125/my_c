#include <stdio.h>
#include <stdlib.h>

int main(){
int n;
scanf("%d", &n);
int count=0;

for(int i=1;i<n;i++)
{
    for(int j=i; j<n; j++)
    {
        for(int k=j; k<n;k++)
        {
            if(i+j+k==n)
            {
                if(i<=k && i+j >k && i+j+k==n  )
               count++;// printf("%d+%d+%d=%d\n",i,j,k,n);
            }
        }
    }
}

printf("%d", count);
}
