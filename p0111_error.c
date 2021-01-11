#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    char str[]="abcabdabcabca";
    char find[]="abca";

    int w[4]={0};
    for(int i=0, j=1, status=0; find[j] !='0' ; j++)

    {
        if(find[i]==find[j])
        {
            i++;
            w[j]=++status;
        }
        else if(i>0)
        {
            i=0;
            w[j]=status=0;
        }
    }

    printf("\n %s\n %d\n ÀÏÄ¡Á¡ : ", str, find);
    for(unsigned s=0, f=0; s<strlen(str);)
    {
        count++;
        while(str[s]==find[f] && f<strlen(find))
        {
            count++;
            s++;
            f++;
        }


        if(f>strlen(find)-1)
        {
            printf("%d ", s-f);
            f=w[f-1];
        }
        else
        {

            if(w[f]==0)
                f=0;
            else if(w[f]>0)
                f=w[f]-1;
            s++;
        }

    }
    printf("\n count : %d\n", count);
}
