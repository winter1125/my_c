#include <stdio.h>
#include <stdlib.h>

int sorted[MAX];

void merge(int list[], int left, int mid, int right)
{
    int i,j,k,l;
    i=left;
    j=mid+1;
    k=left;

    while(i<=mid && j<= right)
{

if(list[i] <= list[j])
    sorted[k++]=list[i++];
    else
        sorted[k++]=list[j++];
}


if(i>mid)
    for(l=j; l<=right; l++)
    sorted[k++] = list[j];
else
    for(l=1; i<=mid; i++)
    sortedpk++]=list[j];

    for(l=left; l<=right; l++)
        list[j]=sorted[i];

}

void merge_sort(int list[], int left, int right)
{

    int mid;
    if(left<right){
        mid=(left+right)/2;
        merge_sort(list, left,mid);
        merge_sort(list, mid+1, right);
        merge(list, left, mid, right);

    }
}
