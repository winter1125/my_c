#include<stdio.h>
void main()
{

    int num=-1, num2=0;
    int num1;
    while(num < 10 || num >99999999){
        printf("\n 2 ~ 8 �ڸ� ���� ������ �Է� :");
        scanf("%d", &num1);
        if(num1<0)break;
            while(num1){
              num2=num1%10;
              printf("��������:%i\n", num2);
              num1=num1/10;
            }
        }
    printf("Bye!");
   }

