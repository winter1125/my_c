#include <stdio.h>
#include <stdlib.h>

int fibo(int num1)
{
    printf("Fibonacci Number %d \n", num1);
    if(num1==0) return 0;
    if(num1==1) return 1;
    return (fibo(num1-1) +fibo(num1-2));
}

int main()
{
    int num1;
    printf("input Fibonacci =");
    scanf("%d", &num1);
    fibo(num1);

}
