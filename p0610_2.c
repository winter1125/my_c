#include <stdio.h>
#include <stdlib.h>

int main()
{

    char str[101]="AbCd 1234 ~!";
    int len=0;
    //gets(str);
    len=strlen(str);
    for(int i=0; i<len;i++)
        if(i%2) printf("%c", str[i]);
   // puts(str);
}
