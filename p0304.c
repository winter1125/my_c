#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   char str[100]="781201-1114311";
   scanf("%s", &str);
   //str="700201-2114311";
  // printf("%s", str);
  //int len;
  //len=strlen(str);

  //printf("len=%d\n", len);

       if(str[7]=='1' || str[7]=='2')
       {
           printf("19");
       }
       else        {
           printf("20");
       }

   printf("%c%c",str[0],str[1]);
   printf("/");
   printf("%c%c",str[2],str[3]);
   printf("/");
   printf("%c%c",str[4],str[5]);

   int even;
   even=str[7]-'0';
   if(even%2==0) printf(" F");
   else if(even%2==1) printf(" M");
}


