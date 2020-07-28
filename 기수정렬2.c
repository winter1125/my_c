#include<stdio.h>
int main()
{
    freopen("input.txt","r",stdin);
    int arr[]={11,1,83,202,55,4,119,81,15,47,19,28};
    int n= sizeof(arr)/sizeof(int);
    int max=0,count=0,count1=1,rear=0, queue[n+1];
    printf("########## Sorting before ##########\n");
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
        if(arr[i]>max) max=arr[i];
    }
    int temp=max;

    while(temp>0)
    {
        temp/=10;
        count++;
    }
    for(int i=0; i<count; i++)
    {
        rear=0;
        printf("\n##### %d Round #####\n",i+1);
        for(int j=0; j<=9; j++)
        {
            for(int k=0; k<n; k++)
            {
                if(((arr[k]/count1)%10) == j)
                {
                    queue[rear++]=arr[k];
                }
            }
        }
        for(int l=0; l<n; l++)
        {
            printf("%d ",queue[l]);
            arr[l]=queue[l];
        }
        count1*=10;
    }
    return 0;
}
