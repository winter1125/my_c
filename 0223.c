#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int arr[]={100,90,76,60,90};
    int arr[100];
    int n;
    scanf("%d", &n);

    //int num;
    //num=sizeof(arr)/sizeof(int);

    //printf("%d", num);

    for(int i=0;i<n; i++)
    {
        scanf("%d", &arr[i]);
    }


    int rank;
    int ranks[100];
    for(int i=0; i<n;i++)
    {
        rank=0;
        for(int j=0;j<n;j++)
        {
        if(arr[i]<arr[j])rank++;
        }
        ranks[i]=rank+1;
    }

    for(int k=0; k<n; k++)
    {
        printf("%d %d\n", arr[k], ranks[k]);
    }
}
