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
    int k = num1 % 10; //��¥�� ���� �ڸ���



    for (int i = 0; i < 5; i++) {
        if (k != num2[i]) //��ȣ�� ���� �ڸ� ��
        {
            continue;
        }
        num++;

    }

    printf("%d", num);
}