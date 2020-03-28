#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1;
   int count=0;
   char arr[100];

  freopen("input.txt","r", stdin);
  fgets(arr, sizeof(arr), stdin);
  for(int i=0; arr[i] != NULL; i++)
  {
      if(arr[i]>='A' && arr[i]<='Z')
      {
          arr[i]=arr[i]+32;
      }
  }


  for(int i=0; arr[i]!=NULL; i++)
  {
      count++;
      if(arr[i]!=arr[i+1]){
        printf("%c%d",arr[i],count);
        count=0;
      }

  }

}
