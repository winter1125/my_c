#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 5

void  main(){
   int suja[4];
   int k=1000,y=0;
   int dt,bm,x,s,m,p;

   bm=8;
   dt=4567;

   for(x=0; x<=3; x++){
    s=dt/k;
    suja[x]=s;
    dt=dt%k;
    k=k/10;
   }

   for(x=0; x<=2; x++)
   {
       m=1;
       for(p=0;p<=2-x;p++)
        m=m*bm;
       y=y+suja[x]*m;
       //printf(" y=y+suja[x]*m;=%d\n", y);
   }
   y=y+suja[3];
   printf("%d",y);
    }


