#include <stdio.h>
#include <stdlib.h>

int di[100];
int oc[100];
int he[100];
int i,j;


void bin(int n){

 printf("2Áø");
   for( i=0;n>0;i++)
   {
       di[i]=n%2;
       n=n/2;
   }

   for(j=i-1;j>=0;j--)
   {
       printf("%d",di[j]);
   }
}


void oct(int n)
{
 printf("8Áø");
   for(i=0;n>0;i++)
    {
        oc[i]=n%8;
        n=n/8;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",oc[j]);
    }
}

int main()
{
    int n=20;
    bin(n);
    printf("\n");
    oct(n);
  // hex(n);
}
