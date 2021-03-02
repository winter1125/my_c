#include <stdio.h>
#include <stdlib.h>

int array[100][100];
int memo[100][100];

int m,n;

int my_max(int a, int b)
{

    if(a>b) return a;
    else
        return b;
}


int dp(int a, int b){

  if(a>=m || b>=n) return 0;
  else if(memo[a][b]!=0) memo[a][b];
  else return memo[a][b]=my_max(dp(a+1,b)+array[a][b], dp(a, b+1)+array[a][b]);
 // else return memo[a][b]=my_max(dp(a+1,b)+array[a][b],dp(a,b+1)+array[a][b]);
}





int main()
{
    int i,j;
    scanf("%d%d", &m,&n);
    for(i=0; i<m;i++)
    {
        for(j=0; j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }



    /*
    for(i=0; i<m; i++)
    {
        for(j=0; j<n;j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    */

    dp(0,0);
    printf("%d", memo[0][0]);



}
