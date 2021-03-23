#include <stdio.h>
#include <stdlib.h>

int fail[100];

void failure(char *string)
{
    int n=strlen(string);
    int i,j;
    fail[0]=-1;
    for(j=1; j<n; j++)
    {
        i=fail[j-1];
        while(string[j] != string[i+1] && i>=0)
        {
            i=fail[i];
        }
        if(string[j]==string[i+1])
        {
            fail[j]=i+1;
        }
        else
        {

            fail[j]=-1;
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d", fail[i]);
    }
    printf("\n");
}

int kmp(char *string, char *pat)
{
    int i=0, j=0;
    int lens=strlen(string);
    int lenp=strlen(pat);
    while(i < lens && j<lenp)
    {
        if(string[i]==string[j])
        {
            i++;
            j++;
        }
        else if(j==0)
        {
            i++;
        }
        else
        {

            j=fail[i-1]+1;
        }
    }

    return (j==lenp ? i-lenp: -1);
}

int main()
{
    int count=0;
    int flag=0;
    char string[]="aabaacaababa";
    char pat[]="caab";
    failure(string);
    printf("%d", kmp(string, pat));
    return 0;
}
