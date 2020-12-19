#include <stdio.h>
#include <stdlib.h>
#define MAX 10

#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

int arr[MAX];
int n;


select_sort(int arr[], int n){

    int i,j,least, temp;
    for(i=0; i<n-1; i++){
            least=i;
    for(j=i+1; j<n; j++)
        if(arr[least] > arr[j]) least=j;
        SWAP(arr[i], arr[least], temp);
    }
}

int main()
{
    int i;
    n=10;

    srand(time(NULL));

    for(i=0;i<n; i++ )
    arr[i]=rand()%100;


    select_sort(arr, n);
    for(i=0;i<n; i++ )
    printf("%d ", arr[i]);
}
