#include<stdio.h>
#include<stdlib.h>
#define SWAP(x,y,t)((t)=(x), (x)=(y),(y)=(t))
#define MAX 500
#define SIZE 5


void main()
{


int temp[10];
    int temp2[10];

    int i;
    while(temp[i]){
        temp[i]=temp2[i];
        i++;

    }

    for(int i=0; i<10; i++)
    printf("%d ", temp[i]);
}
