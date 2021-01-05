#include<stdio.h>
#include<stdlib.h>


int i,j,sum=0;
int arr[5][5];

int f(int a, int b){
    for(i=a; i<a+3; i++)
    {
        for(j=b; j<b+3; j++)
        {
            sum+=arr[i][j];


        }
    }

 return sum;
}


void main(){

    freopen("input.txt","r",stdin);
    int max=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
        scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++){
            printf("%d ", arr[i][j]);
        }
         printf("\n");
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max < f(i,j))
                max=f(i,j);
        }
    }

    printf("\nmax=%d", max);
}
