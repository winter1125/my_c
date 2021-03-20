#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){

    int sum=0;
    int i;

    char arr[100];
    scanf("%s", arr);

   int len=strlen(arr);
    int temp;

   for(int i=0; i<len/2; i++) {
        temp=arr[i];
       arr[i]=arr[strlen(arr)-i-1];
       arr[strlen(arr)-i-1]=temp;
   }
/*
   for( i=0; i<len; i++)
   {
       printf("%c", arr[i]); //00016
   }
*/

   if(arr[0]=='0'){

       for(i=0; arr[i]=='0';++i)
        ;
       while(i<strlen(arr)) {
        printf("%c", arr[i]);
        sum += arr[i]-'0';
        ++i;// 12000   00012000
       }
   }
     else {

         for(i=0; i < strlen(arr); ++i)
            sum += arr[i]-'0';
         printf("%c", arr[i]);
     }

   printf("\n", sum);
   return 0;
}





