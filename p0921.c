#include <stdio.h>
#include <stdlib.h>
int x=1;


void fun1(void){
int x=25;
x++;
printf("%d, ",x);
}

void fun2(void){
static int x=50;
x++;
printf("%d, ",x);
}

void fun3(void){
 x*=10;

printf("%d, ",x);
}

int main(){

int i;
int x=5;
{

    int x=7;
    for(i=0; i<3;i++){
        fun1();
        fun2();
        fun3();

    }
    printf("%d, ",x);
}
printf("%d, ",x);
return 0;

}
