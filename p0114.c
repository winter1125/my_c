#include <stdio.h>
#include <stdlib.h>

    char str1[]="abcdef";
    char str2[]="abcdaa";
    char str3[]="abcdzz";
    char str4[]="abcdef";


int my(char *str1, char* str2)
{
    int i=0;

    while(str1[i] != "NULL" || str2[i] != "NULL"){
        if(str1[i] == str2[i]){
            i++;
            continue;

        }

        else if(str1[i] > str2[i])
            return 1;

        else if(str1[i] < str2[i])
        return -1;
        i++;
    }

    if(str1[i] == str2[i])
     return 0;

    else if(str1[i] != 'NULL')
        return 1;
    else return -1;
}



int main()
{
    char str[]="abc#def@@#@ !g";
    char *ptr=strtok(str,"#@!");



    printf("%s\n", ptr);

    ptr=strtok(NULL,"#@!");
    printf("%s\n", ptr);

    ptr=strtok(NULL,"#@!");
    printf("%s\n", ptr);

    ptr=strtok(NULL,"#@!");
    printf("%s\n", ptr);

    ptr=strtok(NULL,"#@!");
    printf("%s\n", ptr);

   printf("%d ", my(str1, str2)); // 1
   printf("%d ", my(str1, str3)); // -1
   printf("%d ", my(str1, str4)); // 0
}

