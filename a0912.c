#include<stdio.h>
int main()
{
    freopen("input.txt", "r", stdin);
    int strike = 0, ball = 0, n, j;
    char arr[1001];
    char arr1[1001];
    scanf("%s %d", arr, &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", arr1);
        j = 0;
        strike = 0;
        ball = 0;
        for (int k = 0; k < 3; k++)
        {
            for (int h = 0; h < 3; h++)
            {
                if (arr[k] == arr1[h])
                {
                    if (k == h)
                    {
                        strike++;
                    }
                    else
                    {
                        ball++;
                    }
                }
            }
        }
        if (strike == 0 && ball == 0)
        {
            printf("OUT\n");
            continue;
        }
        if (strike == 3)
        {
            printf("%dS\n", strike);
            break;
        }
        if (strike == 0)
        {
            printf("%dB\n", ball);
            continue;
        }
        if (ball == 0)
        {
            printf("%dS\n", strike);
            continue;
        }
        printf("%dS%dB\n", strike, ball);
    }
    if (strike == 3) printf("SUCCESS");
    else printf("FAIL");
    return;
}

