#include <stdio.h>
#include <stdlib.h>

int f(int *b, int n)
{

    int i;
    for(i=0; i<n; i++)
        *(b+2)=*(b+i)+5;
}
int main()
{
   int k, a[5]={10,30,50,70,90};
   f(a,5);

   for(k=0; k<=4; k++)
   printf("%d  ", a[k]);
   return 0;

}
