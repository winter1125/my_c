#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int swap(int* a, int* b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int t;
    int a[7] = {4,5,2,1,3,0,6 };
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 7; j++)
            if (a[i] > a[j])
                swap(&a[i], &a[j]);

    for (int i = 0; i < 7; i++)
        printf("%d  ", a[i]);

       retuen 0;
}
