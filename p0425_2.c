#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{

    int temp=*a;
    *a=*b;
    *b=temp;
}

int f(int a[], int p, int r){

    int i=p;
    int pivot=a[p];
    printf("%d ", pivot);
    for(int j=p; j<r+1; j++)
    {

        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i], &a[p]);
    return i;
}


void sort(int a[], int p, int r)
{
    if(p<r){
        int q=f(a, p,r);
        sort(a,p,q-1);
        sort(a, q+1,r);
    }
}
int main()
{
   int a[10]={4,5,3,1,7,8,0,2,6,9};
   sort(a,0,9);
   return 0;
}
