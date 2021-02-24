#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int fail[100];

void failure(char* pat)
{

    int i, j;
    int n;
    n = strlen(pat);
    fail[0] = -1;

    for (j = 1; j < n; j++)
    {
        i = fail[j - 1];

        while ((pat[j] != pat[i + 1]) && (i >= 0))
        {
            i = fail[i];
        }
        if (pat[j] == pat[i + 1])
        {
            fail[j] = i + 1;
        }
        else
        {
            fail[j] = -1;
        }
    }

    for (i = 0; i < n; i++)
    {

        printf("%d ", fail[i]);
    }
    printf("\n");
}

int kmp(char* string, char* pat)
{
    int i = 0;
    int j = 0;

    int lens = strlen(string);
    int lenp = strlen(pat);

    while (i < lens && j < lenp)
    {
        if(string[i] == pat[j])
        {
            i++;
            j++;
        }
        else if (j == 0)
        {
            i++;
        }
        else

        {
            j = fail[j - 1] + 1;
        }
    }
    return ((j == lenp) ? (i - lenp) : -1);
}

int main()
{
    char string[] = "aabaacaababa";
    char pat[] = "caab";
    char* str = string;
    failure(string);
    printf("%d", kmp(string, pat));
    return 0;
}
