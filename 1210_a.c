#include <stdio.h>
#include <stdlib.h>

int binary(int num1){
if(num1){
    binary(num1/2);
    printf("%d", num1%2);

}

}

int main()
{
    srand((unsigned)time(NULL));
   int i,j;
   int num1;
   for(int i=0; i<5; i++){
   num1=rand()%100+1;
   printf("%5d ->", num1);
   binary(num1);
   printf("\n");
   }
}
