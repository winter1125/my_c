#include <stdio.h>
#include <stdlib.h>

int array[100];
even_max=0;
odd_max=0;

int main()
{
    int num1=7;
   // scanf("%d", &num1);

    for(int i=0; i<num1; i++)
    {
      scanf("%d", &array[i]);
    }

    for(int i=0; i<num1; i++)
    {
      if(array[i]%2==0)
      {
          if(even_max < array[i] ) even_max=array[i];
      }
    }

    for(int j=0; j<num1; j++){
         if(array[j]%2==1)
      {
          if(odd_max < array[j] ) odd_max=array[j];
      }
    }


    printf("%d", even_max+odd_max);
    //printf("%d  ", odd_max);
}
