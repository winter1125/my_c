#include<stdio.h>
#include<stdlib.h>



int fib(int n){


if(n<=1) return n;
return n*fib(n-1)
}

int main(){


   // int n=7;

   int n;
   scanf("%d", &n);
    printf("%d", fib(n));
}

