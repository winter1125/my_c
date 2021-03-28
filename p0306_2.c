#include <stdio.h>
#include <stdlib.h>


int max(int a,int b)
{
    return (a>b) ? a : b;
}

int max3(int a,int b,int c)
{
    return max(a,b)? max(a,c) : max(b,c);}

int gcd3(int a,int b,int c)
{
    int i,min=max3(a,b,c);

    for(i=min;i>1;i--)
    {
        if(a%i==0 && b&i==0 && c&i==0)
            return i;
        return i;
    }
}
int main()
{
    int a=4;
    int b=8;
    int c=10;
    printf("%d",gcd3(a,b,c));
}
