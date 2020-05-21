#include<stdio.h>

int main()
{
   freopen("input.txt","r",stdin);
    int n=11, flag=0, k=0, arr[100][100],count=0;
    for(int i=1; i<=11; i++)
    {
        for(int j=1; j<=10; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    while(1)
    {
        k++;
        flag=0;
        for(int j=10; j>=1; j--)
        {
            if(arr[n][k]==0)
            {
                break;
            }
            if(arr[j][k]>0)
            {
                flag=0;
                printf("%d crash\n",k);
                break;
            }
            if(arr[j][k]<0)
            {
                flag=0;
                printf("%d fall\n",k);
                break;
            }
            if(arr[j][k]==0)
            {
                flag=1;
            }

        }
        count++;
        if(flag==1 && count==10)
        {
            printf("%d safe",k);
            break;
        }
        else if(flag==1)
        {
            printf("%d safe\n",k);
        }
        else if(count==10)
        {
            break;
        }
    }

 return 0;
}
