#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
    int tmp;
    int sum;

    if(a>=b) tmp=b;
    else
        tmp=a;

    for(int i=1;i<=tmp;i++)
    {
        if(a%i==0 && b%i==0)
        {
            sum=a;
        }
    }
    return sum;
}
int main()
{
    //int a=64;
    //int b=128;
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d ", gcd(a,b));
}
