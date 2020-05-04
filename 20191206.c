#include <stdio.h>
#include <stdlib.h>



double powe(float base, int exp)
{
    double result=1.0;
    for(int i=0; i<exp; i++)
      {
     result=result*base;
      }


     return result;
}

int main()
{
   int num1;
   float base;
   int exp;
   double q, qq;
   printf("정사각형의 넓이:");
   scanf("%d", &num1);
   q=sqrt(num1);
   printf("정사각형의 한변의 길이:");
   printf("%f\n", q);
   printf("밑과지수:");
   scanf("%f %d", &base, &exp);
   qq=powe(base,exp);
   printf("%f의 %f승은 %f입니다.",base, (float)exp,qq);
}
