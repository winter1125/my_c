#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x, z;
   int f, y=6;

   x=5/4.0 * 2.5;
   printf("x=%lf\n", x);
   f=~y;
   printf("%d\n", f);
   f++;

   printf("f=%d\n", (f >10)? ++f : --f);
   printf("%2.4f\n", x);

   z=(int)(z=1.5, ++z, z+1.55);
   printf("%2.3f\n", z);


}
