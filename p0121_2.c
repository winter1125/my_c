#include<stdio.h>
#include<stdlib.h>



int fib(int n){


    if(n==0) {return 0;}

    else if( n==1 || n==2 )
    {
        return 1;
    }

    else {
    return (fib(n-1) + fib(n-2));
  }

}


int main(){


   // int n=7;

   int n;
   scanf("%d", &n);
    printf("%d", fib(n));
}

