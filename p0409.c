#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS  




#define TRUE 1

int main(void)
{
    int score = 0, m = 0, sum = 0;
    while (TRUE)
    {
        printf("학생의 점수를 입력 하시오  ");
        scanf("%d", &score);

        if (score > 100)
            break;
        m = m + 1;
        sum = sum + score;
    }

    printf("\n 입력 학생수는 %d 입니다 \n", m);
    printf("점수 합계는 %d 입니다 \n", sum);
    printf("평균 점수는 %d 입니다 \n", sum / m);
    return 0;

}
