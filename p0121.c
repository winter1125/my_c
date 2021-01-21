#include<stdio.h>
#include<stdlib.h>


int afactorial(int n){

    if(n<1) return 1;
    else
    return n*afactorial(n-1);
}


int main() {
    int n;
    //n=5;
    scanf("%d", &n);
    printf("%d",afactorial(n));
}
