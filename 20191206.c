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
   printf("���簢���� ����:");
   scanf("%d", &num1);
   q=sqrt(num1);
   printf("���簢���� �Ѻ��� ����:");
   printf("%f\n", q);
   printf("�ذ�����:");
   scanf("%f %d", &base, &exp);
   qq=powe(base,exp);
   printf("%f�� %f���� %f�Դϴ�.",base, (float)exp,qq);
}
