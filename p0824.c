#include<stdio.h>

typedef struct
{
    int height;
    int tall;
    int count;
}aa;
int main()
{
    freopen("input.txt", "r", stdin);
    int n, count = 0;
    scanf("%d", &n);
    aa arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &arr[i].height, &arr[i].tall);
        arr[i].count = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j != i)
            {
                if (arr[i].height < arr[j].height && arr[i].tall < arr[j].tall)
                {
                    arr[i].count++;
                    continue;
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i].count);
    }
    return;
}