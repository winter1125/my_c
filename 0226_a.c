#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[20][20]={};
   int number;
   int x, y;
   int i,j;
   freopen("input.txt","r", stdin);

   scanf("%d", &number);


   for(int i=1; i<=number; i++){

        scanf("%d%d", &x, &y);
        arr[x][y]=1;
   }

   for(i=1; i<=19; i++){
    for(j=1; j<=19; j++){
        printf("%d ", arr[i][j]);
    }
     printf("\n");
   }


}
