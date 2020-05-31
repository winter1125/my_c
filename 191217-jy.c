#include <stdio.h>

int f(int n)
{
	int i, sum=0;
	
	for(i=1;i<=n;i++){
		if(n%i == 0)
		sum +=i;
	}
	return sum;
}

int main()
{
	int n;
	printf("완전수 판별할 수를 입력하세요.");
	scanf("%d", &n);
	
	if(n*2==f(n)) 
		printf("%d는 yes\n", n);
	else printf("%d는 no\n", n);
	
}
