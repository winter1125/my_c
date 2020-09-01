#include<stdio.h>
int arr[100001], flag[100001];
int main()
{
    freopen("input.txt", "r", stdin);
    int n, m, w, x, a = 0;
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d", &w, &x);
        arr[w] += 1;
        arr[x] -= 1;
    }
    for (int i = 1; i <= m; i++)
    {
        if (flag[arr[i]] != 0)
        {
            printf("%d", -1);
            a = 1;
            break;
        }
        flag[arr[i]] = 1;
    }
    if (a != 1)
    {
        for (int i = 1; i <= m; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return;
}