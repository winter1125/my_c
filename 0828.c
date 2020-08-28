#include <stdio.h>

int main()
{
    //freopen("input.txt","r",stdin);
    long long arr[100001] = { 0, };
    long long arr1[100001] = { 0, };
    long long result[100001] = { 0, };
    int i, n;
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    result[1] = arr[1] * arr1[1];
    long long min = arr1[1];
    for (i = 2; i < n; i++)
    {
        if (arr1[i] < min)
        {
            min = arr1[i];
        }
        result[i] = result[i - 1] + min * arr[i];
    }
    printf("%ld", result[i - 1]);

}