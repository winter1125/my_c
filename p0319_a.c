#include <stdio.h>
#include <stdlib.h>

int arr1[1001][1001]={0,};

int num1, num2;
int count3=0;

 int search2(int row, int col){
    if(row == -1 || row == num1) return ;
    if(col == -1 || col == num2) return ;

    if(arr1[row][col]== 0) return ;

    arr1[row][col]=0;

    count3++;

    if(row-1>=0 && arr1[row-1][col]==1){ search2(row-1,col); }
    if(row+1<= num1 && arr1[row+1][col]==1){ search2(row+1,col); }
    if(col-1>=0 && arr1[row][col-1]==1){ search2(row,col-1); }
    if(row+1<= num1 && arr1[row][col+1]==1){ search2(row,col+1); }


    return;
    }


int main()
{
    freopen("input.txt","r", stdin);
    scanf("%d", &num1);

    for(int i=0; i<num1; i++){
        for(int j=0; j<num1; j++){
            scanf("%d", &arr1[i][j]);
            //arr2[i][j]=arr1[i][j];
        }
    }


    int count1=0;
    int count2=0;

    for(int i=0; i<num1; i++){
        for(int j=0; j<num1; j++){
             if(arr1[i][j]==1){
                arr1[i][j];
                   search2(i,j); count2++;

                   }
        }
    }

  printf("%d %d %d", count1, count2, count3);
  return 0;

    }
