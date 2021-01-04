#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 400의 배수는 윤연이다.
    // 4의 배수들중 100의 배수가 아닌 해들은 모두 윤년이다.

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
