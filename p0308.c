#include <stdio.h>
#include <stdlib.h>
#define swap(a,b,temp)((temp)=(a),(a)=(b),(b)=(temp))

int gcd3(int a,int b, int c)
{
   int i;
   for(i=a; i>1; i--)
    if(a%i==0 && b%i==0 && c%i==0)
    return i;
  //return 1;
}


int main()
{
    int a,b,c;
    int max;
    int min;
    int temp;

   scanf("%d%d%d",&a,&b,&c);

    max= (a>b)?a:b;
    max=(max>c)?max:c;

    min=(a<b)?a:b;
    min=(min<c)?min:c;

  //  printf("%d\n", max);
    //printf("%d\n", min);

    //printf("a=%d b=%d c=%d\n",a,b,c);


    if(b>a) swap(a,b,temp);
    if(c>a) swap(a,c,temp);
    if(c>b) swap(b,c,temp);

//     printf("a=%d b=%d c=%d\n",a,b,c);

     printf("%d", gcd3(a,b,c));
}
