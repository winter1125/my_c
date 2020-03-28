#include<stdio.h>

void unknown(){
    char ch;
    if((ch = getchar()) != '\n')
        unknown();
    putchar(ch);

}

int main(){
    printf("input=?" );
    unknown();

}
