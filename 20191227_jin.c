#include <stdio.h>

int main(){
	char str[100];
	char ch;
	
	int upper=0, lower=0, digit=0;
	int i=0;
	
	printf("문자열을 입력하세요 ");
	scanf("%s",str);
		
	do{
		ch=str[i];
		
		if(ch>='A'&&ch<='Z')
			upper++;
		if(ch>='a'&&ch<='z')
			lower++;
		if(ch>='0'&&ch<='9')
			digit++;
			
		i++;
	}while(ch!= '\0');
	
	printf("대문자 %d개, 소문자 %d개, 숫자 %d개",upper,lower,digit);
}
