#include <stdio.h>
#pragma warning(disable:4996)


int n;
char array[8];


void func(int num)
{
    for (int i = 1; i <= 2; i++)
    {
        if (i == 1) {
            array[num] = 'O';
        }

        else
        {
            array[num] = 'x';
        }

        if (num != n)
            func(num + 1);

        if (num == n)
        {
            for (int i = 1; i <= n; i++)
                printf("%c", array[i]);
            printf("\n");
        }

    }

}

int main()
{
    scanf("%d", &n);
    func(1);
}

