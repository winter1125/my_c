#include <stdio.h>
#include <conio.h>

#define MAX 50
#define SHOWPASS

void Print(int *a, int n)
{
    int i;

    for( i=0 ; i<n ; i++ )
        printf("%d ", a[i]);
}

void RadixSort(int *a, int n)
{
    int i, b[MAX], m=0, exp=1;

    for( i=0 ; i<n ; i++ )
    {
        if( a[i] > m )
            m = a[i];
    }

    while( m/exp > 0 )
    {
        int bucket[10] = {0};

        for( i=0 ; i<n ; i++ )
            bucket[a[i]/exp%10]++;

        for( i=1 ; i<10 ; i++ )
            bucket[i] += bucket[i-1];

        for( i=n-1 ; i>=0 ; i-- )
            b[--bucket[a[i]/exp%10]] = a[i];

        for( i=0 ; i<n ; i++ )
            a[i] = b[i];

        exp *= 10;
    }

#ifdef SHOWPASS
    printf("\nPASS  : ");
    Print(a, n);

#endif
}

int main()
{
    freopen("input.txt","r",stdin);
    int arr[MAX];
    int i, n;


    scanf("%d", &n);


    for( i=0 ; i<n ; i++ )
        scanf("%d", &arr[i]);

    printf("\nARRAY : ");
    Print(&arr[0], n);

    RadixSort(&arr[0], n);

    printf("\nSORTED : ");
    Print(&arr[0], n);
    printf("\n");

    _getch();

    return 0;
}

