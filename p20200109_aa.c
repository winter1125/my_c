#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
#define SWAP(x,y,temp)((temp)=(x),(x)=(y),(y)=(temp))

void bubblesort(int arr[], int num1){

int count=0;

    for(int i=0; i<num1-1; i++){
     int flag=0;
         for(int j=0; j<num1-i-1; j++){

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag=1;
              }
         }

    if(flag==0){
            printf("%d", i); return;
            }

         }

    printf("%d", num1-1);

}


void main()
{
  int arr[MAX];
  int num1;

  freopen("input.txt","r", stdin);
  freopen("output.txt","w",stdout);

  scanf("%d", &num1);

  for(int i=0; i<num1; i++){
    scanf("%d", &arr[i]);
    }
  bubblesort(arr, num1);

}
