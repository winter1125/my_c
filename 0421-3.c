#include <stdio.h>
#include <stdlib.h>

int arr[20][4]={0};
int arr2[20]={0};
int n; k, i, j;
int time, money;
int best;

void get(int dist)
{

    if(n== dist)
    {
        time=0;
        for(i=0; i<n; i++)
            time+=arr[i][arr2[i]];

        if(time<=k)
        {
            money=0;
            for(i=0; i<n; i++)
                money+=arr[i][arr2[i]+1];
            if(best < money) best=money;
        }
        return ;
    }
    arr2[dist]=0;
    get(dist+1);

    arr2[dist]=2;
    get(dist+1);
}

int main()
{
   freopen("input.txt","r", stdin);
   scanf("%d%d", &n, &k);

   for(i=0; i<n; i++)
   for(j=0; j<4; j++)
    scanf("%d", &arr[i][j]);


   get(0);
   printf("%d", best);
   return 0;

}
