#include <stdio.h>
#include <stdlib.h>
int bin_digit[100];
int oct_digit[100];
int hex_digit[100];
int mok;
int na;

void bin(int num1)
{
    printf("2 ");
    int i,j;
    int mok,na;

    for(i=0;num1>0;i++)
    {
        bin_digit[i]=num1%2;
        num1=num1/2;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin_digit[j]);
    }
}

void oct(int num1)
{
     printf("8 ");
    int i,j;
    for(i=0;num1>0;i++)
    {
        oct_digit[i]=num1 % 8;
        num1=num1/8;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%d",oct_digit[j]);
    }
}

void hex(int num1)
{
    printf("16 ");
    int i,j;
    for(i=0;num1>0;i++)
    {
        na=num1%16;
        if(na>=10)
        {
            hex_digit[i]=65+na-10;
        }
        else if(na>=0 && na<=9)
          {
          hex_digit[i]=48+na;
        }
        num1=num1/16;
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%c",hex_digit[j]);
    }
}
int main()
{ int num1;
    scanf("%d",&num1);
    bin(num1);
    printf("\n");
    oct(num1);
    printf("\n");
    hex(num1);
}
