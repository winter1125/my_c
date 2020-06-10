#include<stdio.h>
int arr[301],arr1[301],n;

int result(int flag, int flag1)
{
    if(flag>flag1)
    {
        return flag;
    }
    else
    {
        return flag1;
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    arr1[1]=arr[1];
    arr1[2]=result(arr[1]+arr[2],arr[2]);
    arr1[3]=result(arr[1]+arr[3],arr[2]+arr[3]);
    for(int i=4; i<=n; i++)
    {
        arr1[i]=result(arr[i]+arr1[i-2],arr[i]+arr[i-1]+arr1[i-3]);
    }
    printf("%d",arr1[n]);
    return;
}
