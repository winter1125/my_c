#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1;
    int *arr=(int *)malloc(sizeof(int)*MAX);

    //int arr[4600000];
    int test=0;
    int temp=0;
    int num;
    freopen("input.txt","r",stdin);


    scanf("%d", &num1);

    for(int i=0; i<4500000; i++)
    {
        arr[i]=0;
    }

    for(int i=0; i<num1; i++)
    {
        scanf("%d", &num);
        arr[num]++;
    }

    for(int i=0; i< 4500000; i++)
    {
        for(int j=0; j<arr[i]; j++)
        {
            printf("%d ", i);
        }
    }
   free(arr);
 return 0;
}
