#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 5

void  main(){
   int i=3,j=5;
   int *ip,*jp;
   ip=&i;
   jp=&j;
   *ip+=5;
   *jp=*ip-*jp;
   jp=ip;
   *ip*=*jp;
   printf("%d %d\n",i,j);
   printf("%d %d\n",*ip,*jp);
    }


