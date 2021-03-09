#include <stdio.h>
#include <stdlib.h>
#define swap(x,y,temp)((temp)=(x),(x)=(y),(y)=(temp))

int array[100];
int temp;
int i,j;
int n=5;

int main(){

    for(i=0; i<n; i++)
    {

    scanf("%d", &array[i]) ;
    }

    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(array[i]>array[j])
            {
                swap(array[i], array[j], temp);
            }
        }
    }



printf("%d", array[n/2]);
}

