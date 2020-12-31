#include <stdio.h>
#include <stdlib.h>

int start=0;

int binary(int find, int arr[], int start, int end)
{
    int mid=0;
    mid=(start+end)/2;

    if(find==arr[mid])

        return mid;

    else if(find < arr[mid])
         return binary(find, arr, 0, mid-1);

    else if(find > arr[mid])

        return binary(find, arr, mid+1, end);
    return -1;
   }



int main()
{
    int arr[]={1,2,5,7,11,15,22,38,99,101};
    int size=sizeof(arr)/sizeof(int);
    int find=38;

    int result;
    result=binary(find, arr, 0, size);

    printf("result = %d", result+1);
}


