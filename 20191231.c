#include<stdio.h>

int  main( )
{
  char arr[100];
  printf("input character=");
  gets(arr);

  int upper=0;
  int lower=0;
  int digit=0;

  for(int i=0; arr[i] != NULL; i++)
  {
      if(arr[i] >=65 && arr[i]<=65+25){
          upper++;
      }
      else if(arr[i]>=97 && arr[i]<= 97+25){
          lower++;
      }

      else if(arr[i] >= '0' && arr[i] <= '9'){
          digit++;
      }

       }
     printf("대문자 = %d 소문자 = %d 숫자 = %d", upper, lower, digit);

}
