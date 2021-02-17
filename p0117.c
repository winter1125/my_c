#include <stdio.h>
#include <stdlib.h>

int recursive(int n)
{


    int sum=0;
    if(n<0) return 0;
    return n+recursive(n-1);
}
int main()
{
   int n;
   n=100;
   scanf("%d", &n);
   printf("%d ", recursive(n));
}
