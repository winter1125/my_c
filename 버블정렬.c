#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int i,j;
int arr[MAX];
int temp;
int n=10;

bubble_sort(int arr[], int n)
{

    for(i=n-1; i>0; i--)
    {
        for(j=0; j<i; j++)
            if(arr[j] > arr[j+1])
            SWAP(arr[j], arr[j+1], temp);
    }

}


void main(){

    srand(time(NULL));

    for(i=0; i<n; i++)
    arr[i]=rand()%100;

    bubble_sort(arr, n);
    for(i=0; i<n;i++)
    printf("%d ", arr[i]);

}

