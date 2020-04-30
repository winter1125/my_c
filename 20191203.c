#include<stdio.h>
void main()
{

    int num=-1, num2=0;
    int num1;
    while(num < 10 || num >99999999){
        printf("\n 2 ~ 8 자리 양의 정수를 입력 :");
        scanf("%d", &num1);
        if(num1<0)break;
            while(num1){
              num2=num1%10;
              printf("뒤집힌수:%i\n", num2);
              num1=num1/10;
            }
        }
    printf("Bye!");
   }

