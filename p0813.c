#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 5

void  main(){
    int data, i;
    for(i=1; i<=max ; i++)
    {
        if((i%2)==0){
            for(data=i*5;data >=(i*5)-4; data--)
                printf("%3d",data);

            printf("\n");

            }
            else{
              for(data=(5*(i-1))+1;data <=(5*(i-1))+5; data++)
                printf("%3d",data);
                       printf("\n");




            }
        }
    }


