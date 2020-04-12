#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int delta=1;
    int num1=1;
    int arr[5][5];
    int end=5;
    int row=0;
    int k=-1;

   while(1){
    for(a=0; a<end; a++){
        k=k+delta;
        arr[row][k]=num1;
        num1++;

    }
  end--;
  if(end < 0)break;

 for(b=0; b<end; b++){
    row=row+delta;
    arr[row][k]=num1;
    num1++;
 }

  delta=delta*(-1);
   }


 for(int ii=0; ii<5; ii++)
   {
       for(int jj=0; jj<5; jj++)
       {
           printf("%6d ", arr[ii][jj]);
       }
       printf("\n");
   }

   }

