#include<stdio.h>
int main()
{
    int a,b,c,n,count=0;
    scanf("%d%d%d%d",&a,&b,&c,&n);
    if(a<1 || b<1 || c<1 || a>50 || b>50 || c>50 || n<1 || n>300) return;
    for(int i=0; i<=a; i++)
    {
        for(int j=0; j<=b; j++)
        {
            for(int k=0; k<=c; k++)
            {
                if((i*a+j*b+k*c)==n)
                {
                    printf("%d",1);
                    return;
                }
            }
        }
    }
    printf("%d",0);
    return;
}
