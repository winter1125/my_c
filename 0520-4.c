#include <stdio.h>
int arr[1000001];
int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    arr[0] = 1, arr[1] = 1;
    for (int j = 2; j <= 1000001 / j; j++)
    {
        if (arr[j] == 1)
        {
            continue;
        }
        for (int i = j * j; i <= 1000001; i += j)
        {
            if (i % j == 0)
            {
                arr[i] = 1;
            }
        }
    }
    for (int i = m; i <= n; i++)
    {
        if (arr[i] == 0) printf("%d\n", i);
    }
    return 0;
}