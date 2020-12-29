#include<stdio.h>
#include<string.h>
int j;

int sum=0;
int len;
digit[10]={0,};
int aa=0;

void main(){
    char data[10]="082";

//scanf("%s", &data);

char *p;
p=&data;

int octal = atoi(&data[1]);
  //printf("dec=%d\n", octal);

len=strlen(data);

printf("len=%d\n", len);
if(*p=='0' && *(p+1) != 'x')
{
    printf("8진수=%d\n", octal);

    for(int i=len-1; i>=1; i--,j=0)
    {
        aa=aa+(data[i]-'0')*8*j;
    j++;

    }
}
else{
    printf("16진수이거나 10진수 이다 ");
}
printf("%d", aa);
}
