#include<stdio.h>
#include<stdlib.h>
int arr[201];
int fib(int n)
{
    if(n<1)
    {
        return;
    }
    if(n>=1 && n<=2)
    {
        return arr[n]=1;
    }
    if(arr[n]>0)
    {
        return arr[n];
    }
    return arr[n]=(fib(n-1)+ fib(n-2))%10009;
}

int main()
{
    freopen("input.txt","r",stdin);
    int n=0;
    scanf("%d",&n);
    if(n>200)
    {
        return;
    }
    printf("%d",fib(n));
    return ;
}
