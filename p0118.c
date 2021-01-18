#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[]="CCclanguage";
    //gets(arr);

    int count=0;
    int count2=0;
    int count3=0;
    int len;
    len=strlen(arr);


    for(int i=0; i<len;i++){

       if(arr[i]=='C' || arr[i]=='c')
       {
           count++;


           if(arr[i+1]=='c' || arr[i+1]=='C')
            count2++;

            if(arr[i+2]=='c' || arr[i+2]=='C')
                count3++;
       }
    }

    puts(arr);
    printf("%d\n", count);
    printf("%d\n", count2);
    printf("%d\n", count3);

}
