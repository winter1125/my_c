#include <stdio.h>
#include <stdlib.h>

    int size=10;
    int search=77;
    int arr[]={1,2,5,7,11,15,22,38,99,101};
    int result;

int binary(int arr[],int start,  int end, int search)
{
    int mid;

    mid=(start+end)/2;

    if(arr[mid]==search){
    printf("%d", mid);}

    else if(start>=end)// ���Ұ� 1���� ��� ?
    {
        return -1;
    }


   else if(arr[mid] < search)
    {
        return binary(arr,mid-1, end, search);
    }
   else if(arr[mid] > search)
    {
        return binary(int arr[],int start,  int end, int search);
    }

   return -1;
}




int main()
{

    int len;
    len=sizeof(arr)/sizeof(int);
    int start;
    start=0;


   rsult=binary(arr[], start, len, search);

    if(result==-1)
        printf("\n �O���� �����ϴ� ");
    else
        printf("\n %d��°�� �ֽ��ϴ�", result+1);
    //printf("size=%d",result);

    return 0;
}
