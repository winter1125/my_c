#include<stdio.h>
#include<string.h>
int main()
{
    char num1;
    while(1){

   scanf("%c ", &num1);
   printf("%c\n", num1);
   if(num1!='q'){
  continue;
   }
   else
   {
       //printf("%c", num1);
       break;
   }

    }
}
