#include <stdio.h>



int min(int a, int b)
{ return (a>b) ? a:b; }



int min3(int a, int b, int c)
{ return min(a,b) ? min(a,c) : min(b,c); }


int gdc3(int a, int b, int c) {
  int i, min = min3(a, b, c);


  printf("min=%d", min);

  for(i=min; i>1; i--)
    if(a%i==0 && b%i==0 && c%i==0)
      return i;

  return 1;
}

int main()

{
  int a = 200, b = 30, c = 50;

  printf("%d, %d, %d의 최대공약수: %d\n", a, b, c, gdc3(a, b, c));

  return 0;
}
