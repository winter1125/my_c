#include <stdio.h>
#include <stdlib.h>

int main()
{

   int num1=5;
   int num2=2;
   int num3=10;
   int num4=3;

   int mok=num1/(num2+1);
   int na=num1%(num2+1);

    printf("%d %d => %d", num1, num2,mok*(num2)+na);

}
