#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char *search_string(char *s1, char* s2)
{
    int cnt=0;
    char *beg1=s1, *beg2=s2;
    while(*s1 && *s2)
    {

        if(*s1==*s2)
        {

            s1++;
            s2++;
        }
        else
        {

            s1=++beg1;
            s2=beg2;
        }
        cnt++;
    }

    if(!*s2)
        return (char*)beg1;
    else
        return NULL;
}


int main()
{
   char *string ="aaabaaab", *pat="bab";
   printf("%s", search_string(string, pat));
}
