#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void swap(int a[], int i, int j)
{

    int t = a[i];
    a[i] = a[j];
    a[j]=t;
}

void sort(int list[], int n)
{
    int i, j, b = n - 1;
    for (i = 0; i <= n - 1; i++) {
        if (list[b] <= list[i])
            b = i;
        if (n == 7 && i == 0)
            for (j = 0; j < MAX; j++)
                printf("%d ", list[j]);
    }
    swap(list, n - 1, b);

    if (n == 5)

        for (j = 0; j < MAX; j++)
            printf("%d  ", list[j]);

    printf("\n");
    if (n >= 1)
        sort(list, n - 1);


}



main() {
    int list[MAX] = {6,5,1,9,2,8,10,3,7,4};
    sort(list, MAX);

}
 