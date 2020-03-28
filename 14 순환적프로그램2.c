#include <stdio.h>
#include <stdlib.h>

double recursive(double num1)
{
    if(num1<=1) return 1;
    else
    return 1/num1+recursive(num1-1);
}

int main()
{
    double num1;
    printf("input=?");scanf("%lf", &num1);
    printf("%f",recursive(num1));
}
