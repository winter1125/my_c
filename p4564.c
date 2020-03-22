#include <stdio.h>
#include <stdlib.h>

    int d[1000];
    int num1;
    int arr[100];

    int max(int a,int b)
    {
        return a>b ? a: b;
    }
    int up(int n)
    {
        if(n<0) return 0;

        if(n==1) return d[1]=arr[1];
        if(n==2) return d[2]=arr[1]+arr[2];
        if(d[n]!=0) return d[n];
        else return d[n]=max(up(n-3)+arr[n-1],up(n-2)+arr[n]);
    }


    int main(){
    freopen("input.txt","r",stdin);
    scanf("%d", &num1);

    for(int i=1; i<=num1;i++){
    scanf("%d", &arr[i]);
    }
    printf("%d",up(num1));

}



