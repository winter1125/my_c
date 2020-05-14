#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int weight[100],height[100];
    int cnt;
    int rank[10]={1,};
    freopen("input.txt","r",stdin);
    scanf("%d", &num1);
    for(int i=1; i<=num1;i++)
    {
        scanf("%d%d", &weight[i], &height[i]);
    }

    for(int i=1; i<=num1; i++)
    {
       cnt=1;
        for(int j=1; j<=num1; j++)
        {
           if(j!=i){
         if(height[i] <height[j] && weight[i] < weight[j])
         {
            cnt++;
         }
        }

      }
      rank[i]=cnt;

    }

   for(int i=1; i<=num1; i++)
    {

      printf("%d ",rank[i]);
    }


}
