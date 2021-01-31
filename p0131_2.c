#include <stdio.h>
#include <stdlib.h>

void main()
{
        char arr[]="12345a543211a6788-908";
        int a=0;

        int i=0;
        int j=0; //숫자다

        while(1)
        {
            if(j==0 && arr[i] >=48 && arr[i]<=57)
            {
                a=atoi(&arr[i]);
                 printf("%d\n", a);
                j=1;//문자다
            }

            else if(arr[i] == '\0')
                break;
            else if(arr[i]<48 ||arr[i]>57)
                j=0;

            i++;


        }

      // printf("문자 ");

}
