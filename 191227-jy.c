#include <stdio.h>

int main()
{
	int i;
	char st[100];
	int s=0,l=0,num=0;
	
	printf("���ڿ��� �Է��ϼ���\n");
	
	gets(st);
	
	for(i=0;st[i]!=NULL;i++){
		if('a'<=st[i]&&st[i]<='z')s++;
		else if('A'<=st[i]&&st[i]<='Z')l++;
		else if('0'<=st[i]&&st[i]<='9')num++;
	}
	
	printf("�ҹ��ڴ� %d��, �빮�ڴ� %d��, ���ڴ� %d�� �Դϴ�.\n", s,l,num);
}
