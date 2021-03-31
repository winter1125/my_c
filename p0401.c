#include <stdio.h>
#include <stdlib.h>

int arr[100][100];
  int key;
int main()
{
   int i=1,j=0;
   int n=0;
   int sw=1;
   int m=5;
    key=5;


   while(1){
   for(int q=1; q<=key; q++)
   {
       n=n+1;
      j=j+sw;
      arr[i][j]=n;
          }


   key=key-1;

    if(key < 0) break;

    for(int p=1; p<=key; p++)
    {
        i=i+sw;
       arr[i][j]=++n;

          }

         sw=sw*(-1);
    }



    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }



}
