#include <stdio.h>
#include <stdlib.h>
#define MAX 100000000

int memo[51][51]={0};

int recursive(int num1, int num2)
{
    if(num1 < 1) return;
    if(num2 > 50) return ;


    if(num1==1 || num2 ==1 )
    {
        memo[num1][num2]=1;
    }

    if(memo[num1][num2] != 0) return memo[num1][num2];

    else
    {
     return memo[num1][num2]=(recursive(num1-1, num2)+recursive(num1, num2-1))%MAX;
    }

}

int main()
{
   int num1,num2;
   int sum=0;
   scanf("%d %d", &num1,&num2);
   sum=recursive(num1, num2);
   printf("%d", sum);

}
