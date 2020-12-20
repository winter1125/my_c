#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX 10
#define SWAP(x,y,t)((t)=(x), (x)=(y), (y)=(t))

int i,j;
int n=10;
int arr[MAX];

insert_sort(int arr[], int n)
{
    int key;
    for(i=1; i<n;i++){
        key=arr[i];

        for(j=i-1; j>=0 && arr[j]>key; j--)
        arr[j+1]=arr[j];
        arr[j+1]=key;
}
}

void main()
{

    int i,j,temp,key;
    srand(time(NULL));

    for(i=0; i<n;i++)
     arr[i]=rand()%100;

     insert_sort(arr, n);
     for(i=0; i<n;i++)
     printf("%d ", arr[i]);
}
