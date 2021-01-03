#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    a=10;
    b=20;
    c=30;
    int max;
    for(int i=1; i<1000;i++){
        if(a%i==0){
                if(b%i==0){
                    if(c%i==0){
                        //printf("   %d", i);
                       max=i;
                       if(i > max) max=i; }
                }
        }
    }
    printf("%d", max);
}
