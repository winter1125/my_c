#include<stdio.h>
#include<string.h>
int arr[100001];
int n,k,count;

int result(int sum,int check)
{
    if(check>n)
    {
        return;
    }
    sum+=arr[check];
    if(sum==k)
    {
        count++;
        return;
    }
    else if(sum>k)
    {
        return;
    }
    result(sum,check+1);
}
int main()
{
    freopen("input.txt","r",stdin);
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1; i<=n; i++)
    {
        result(0,i);
    }
    printf("%d",count);
    return;
}
