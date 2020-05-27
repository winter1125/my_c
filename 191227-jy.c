#include <stdio.h>

int main()
{
	int i;
	char st[100];
	int s=0,l=0,num=0;
	
	printf("문자열을 입력하세요\n");
	
	gets(st);
	
	for(i=0;st[i]!=NULL;i++){
		if('a'<=st[i]&&st[i]<='z')s++;
		else if('A'<=st[i]&&st[i]<='Z')l++;
		else if('0'<=st[i]&&st[i]<='9')num++;
	}
	
	printf("소문자는 %d개, 대문자는 %d개, 숫자는 %d개 입니다.\n", s,l,num);
}
