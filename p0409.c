#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS  




#define TRUE 1

int main(void)
{
    int score = 0, m = 0, sum = 0;
    while (TRUE)
    {
        printf("�л��� ������ �Է� �Ͻÿ�  ");
        scanf("%d", &score);

        if (score > 100)
            break;
        m = m + 1;
        sum = sum + score;
    }

    printf("\n �Է� �л����� %d �Դϴ� \n", m);
    printf("���� �հ�� %d �Դϴ� \n", sum);
    printf("��� ������ %d �Դϴ� \n", sum / m);
    return 0;

}
