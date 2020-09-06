#include<stdio.h>
#include<stdlib.h>

void main() {
    int num1, num2[100], num = 0;
    freopen("input.txt", "r", stdin);
    scanf("%d", &num1);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num2[i]);
    }
    int k = num1 % 10; //날짜의 일의 자리수



    for (int i = 0; i < 5; i++) {
        if (k != num2[i]) //번호의 일의 자리 수
        {
            continue;
        }
        num++;

    }

    printf("%d", num);
}