#include <stdio.h>
#include <stdlib.h>

int arr1[1001][1001];
int arr2[1001][1001];
int num1, num2;

int onswitch(int row, int col){ // 0 -> 1
    if(row == -1 || row == num1) return;
    if(col == -1 || col == num2) return ;

    if(arr1[row][col]==1) return;

    arr1[row][col]=1;


       if(arr1[row-1][col]==0){ onswitch(row-1,col); }
       if(arr1[row+1][col]==0){ onswitch(row+1,col); }
       if(arr1[row][col-1]==0){ onswitch(row,col-1); }
       if(arr1[row][col+1]==0){ onswitch(row,col+1); }

 return;
    }

 int offswitch(int row, int col)  //1 -> 0
 {
    if(row == -1 || row == num1) return ;
    if(col == -1 || col == num2) return ;

    if(arr2[row][col]== 0) return ;

    arr2[row][col]=0;


    if(arr2[row-1][col]==1){ offswitch(row-1,col); }
    if(arr2[row+1][col]==1){ offswitch(row+1,col); }
    if(arr2[row][col-1]==1){ offswitch(row,col-1); }
    if(arr2[row][col+1]==1){ offswitch(row,col+1); }


    return;
    }


int main()
{
    freopen("input.txt","r", stdin);
    scanf("%d %d", &num1, &num2);

    for(int i=0; i<num1; i++){
        for(int j=0; j<num2; j++){
            scanf("%d", &arr1[i][j]);
            arr2[i][j]=arr1[i][j];

        }
    }

    int count1=0;
    int count2=0;

    for(int i=0; i<num1; i++){
        for(int j=0; j<num2; j++){
            if(arr1[i][j]==0){ onswitch(i,j); count1++;}
            if(arr2[i][j]==1){ offswitch(i,j); count2++;}
        }
    }

  printf("%d %d", count1, count2);
  return 0;

    }
