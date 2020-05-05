#include<stdio.h>
#include<string.h>
void main()
{

    char str[100];
    char cha;
    printf("문자열을 입력하세요:");
    gets(str);

    int len=strlen(str);
    printf("찾을 문자를 입력하세요 :");
    scanf("%c", &cha);


    for(int i=0; i<len; i++)
    {
        if(str[i] == cha){

            printf("%d번째에서 문자%c발견\n", i+1,cha);
        }
    }
}
