#include<stdio.h>
#include<string.h>
void main()
{

    char str[100];
    char cha;
    printf("���ڿ��� �Է��ϼ���:");
    gets(str);

    int len=strlen(str);
    printf("ã�� ���ڸ� �Է��ϼ��� :");
    scanf("%c", &cha);


    for(int i=0; i<len; i++)
    {
        if(str[i] == cha){

            printf("%d��°���� ����%c�߰�\n", i+1,cha);
        }
    }
}
