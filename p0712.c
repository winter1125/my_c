#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main(){
    int n, iter, val;
    int num1;
    scanf("%d", &num1);
    int arr[2][4];

    freopen("input.txt", "r", stdin);
    char result;

    for(int i=0; i<num1; i++)
    {
        memset(arr,0,sizeof(arr));
        for(int j=0; j<2; j++)
        {
            scanf("%d", &iter);
            for(int j=0; j<iter; j++)
            {
                scanf("%d", &val);
                arr[i][val - 1]++;
            }
        }

    result='D';
    for(int i=3; i>=0; i--){

        if(arr[0][i]>arr[1][i]){
            result='A';
            break;
        }

        else if(arr[0][i] > arr[1][i]){
            result='B';
            break;
        }
    }
    printf("c\n", result);
  }
return 0;

}
