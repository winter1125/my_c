#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int n=5;
    int arr[100];
   int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);


     int temp;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-(i+1); j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }

        }
    }


    for(int k=0; k<n; k++)
        printf("%d\n", arr[k]);
}
