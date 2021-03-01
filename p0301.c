#include<stdio.h>

int i,j;
int num1, num2;
int array[100][100];
int memo[100][100];

int my_max(int a, int b)
{
    if(a>b) return a;
    else return b;
}


int dp(int i, int j)
{
  if(i>=num1 || j>= num2) return 0;

  else if(memo[i][j] != 0) return memo[i][j];

  else return memo[i][j]=my_max(dp(i+1,j)+array[i][j], dp(i, j+1)+array[i][j]);


}


int main()
{
    scanf("%d%d", &num1,&num2);
    for( i=0; i<num1; i++){
        for(j=0; j<num2; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    dp(0,0);
    printf("%d", memo[0][0]);
    return 0;
}
