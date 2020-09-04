#include<stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
    char arr[201], c;
    int i = -1, flag = 1, count = 0;
    while (1)
    {
        if (c == ' ') flag = 0;
        else flag = 1;
        i++;
        scanf("%c", &c);
        if (c == '.' || c == '!' || c == '?')
        {
            printf("%c", c);
            break;
        }
        if (i == 0 && c >= 97 && c <= 122)
        {
            printf("%c", c - 32);
            continue;
        }
        else if (i == 0)
        {
            printf("%c", c);
            continue;
        }
        if (c == 'i' && flag == 0)
        {
            printf("%c", 'I');
            continue;
        }
        if (c >= 65 && c <= 90)
        {
            printf("%c", c + 32);
            continue;
        }
        if (c - '0' >= 0 && c - '0' <= 9)
        {
            if (c - '0' == 0)
            {
                printf("%s", "zero");
            }
            else if (c - '0' == 1)
            {
                printf("%s", "one");
            }
            else if (c - '0' == 2)
            {
                printf("%s", "two");
            }
            else if (c - '0' == 3)
            {
                printf("%s", "three");
            }
            else if (c - '0' == 4)
            {
                printf("%s", "four");
            }
            else if (c - '0' == 5)
            {
                printf("%s", "five");
            }
            else if (c - '0' == 6)
            {
                printf("%s", "six");
            }
            else if (c - '0' == 7)
            {
                printf("%s", "seven");
            }
            else if (c - '0' == 8)
            {
                printf("%s", "eight");
            }
            else
            {
                printf("%s", "nine");
            }
            continue;
        }
        printf("%c", c);
    }
    return;
}