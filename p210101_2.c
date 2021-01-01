#include <stdio.h>
#include <stdlib.h>

int main(){

    int my = 170;
    int a = 199;
    int b = 50;
    int c = 300;

    if(a<=my){
        printf("crash %d", a);
    }
    else if(b<=my)
    {
        printf("crash %d", b);
    }
    else if(c<=my)
    {
        printf("crash %d", c);
    }
    else
    {
        printf("%d %d %d %d",a,b,c,my);
    }

}
