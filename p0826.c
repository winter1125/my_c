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

Apr 22, 11:56 PM Shout Shout
Reply
Edit Comment
Comment
Member
Á¦Çö

Apr 22, 11:56 PM Shout Shout
Reply
Edit Comment
Comment
Admin
winter
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int city;
    int road[10000];
    int oil_price[10000];
    long long pay;
    long long min;

    freopen("input.txt", "r", stdin);
    scanf("%d", &city);

    for (int i = 0; i < city - 1; i++)
    {
        scanf("%d", &road[i]);

    }


    for (int i = 0; i < city; i++)
    {
        scanf("%d", &oil_price[i]);

    }
    pay = 0;
    min = oil_price[0];

    // printf("%d", min);

    for (int i = 0; i < city - 1; i++)
    {
        if (min > oil_price[i]) min = oil_price[i];
        pay += min * road[i];
    }
    printf("%lld", pay);
    return 0;

}