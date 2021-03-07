#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int arr[1000];

    scanf("%d", &num);
    for(int i=0; i<num;i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int k=num-1; k>=0; k--)
    {
        printf("%d ", arr[k]);
    }


}
