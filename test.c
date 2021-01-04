#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    int count=0;


       scanf("%d %d %d %d", &a, &b , &c,&d);


    //int count=0;
    count=a+b+c+d;


    printf("%d", count);
  // int len;
//   len=strlen(arr);

   //printf("len=%d", len);
//   int count=0;

   /*
   for(int i=0; i<len; i++)
   {
       count+=arr[i];
   }

   printf("%d ", count);

*/


   if(count >=4)
      {
          printf("Àµ");
      }
    else if(count >=3)
    {
        printf("°É");
    }
    else if(count >=2)
    {
        printf("°³");
    }
    else
    {
        printf("µµ");
    }

}
