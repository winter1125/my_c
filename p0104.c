#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 400�� ����� �����̴�.
    // 4�� ������� 100�� ����� �ƴ� �ص��� ��� �����̴�.

   int day;
   scanf("%d", &day);

   if(day % 4==0 && (day % 100) != 0)
   {
       printf("yes");
   }
   else if(day % 400 ==0)
   {
       printf("yes");
   }
   else

   {
       printf("no");
   }
}
