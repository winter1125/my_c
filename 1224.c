#include<stdio.h>

int n=8;
int sorted[8];

void merge(int data[], int first, int middle, int end)
{

    int i=first;
    int j=middle+1;
    int k=first;

    while(i<=middle && j<=end)
    {
        if(data[i]<= data[j]){
            sorted[k]=data[i];
            i++;
        }
        else
        {
            sorted[k]=data[j];
            j++;
        }
        k++;
    }

    if(i>middle){
        for(int tt=j; tt<=n; tt++){
            sorted[k]=data[tt];
            k++;
        }
      } else{
        for(int kk=i; kk<=n; kk++){
            sorted[k]=data[kk];
            k++;
        }
        }

    for(int t=first; t<=end; t++)
    {
        data[t]=sorted[t];
    }

    }

    void mergesort(int a[], int m, int n){
    if(m<n){
        int middle=(m+n)/2;
        mergesort(a, m, middle);
        mergesort(a, middle+1,n);
        merge(a, m, middle,n);
    }
   }

 int main(void){
    int array[8]={7,6,2,8,3,5,9,1};
    mergesort(array, 0, n-1);
    for(int i=0; i<n; i++){
        printf("%d ", array[i]);
    }

}
