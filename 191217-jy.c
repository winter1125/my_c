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
	printf("������ �Ǻ��� ���� �Է��ϼ���.");
	scanf("%d", &n);
	
	if(n*2==f(n)) 
		printf("%d�� yes\n", n);
	else printf("%d�� no\n", n);
	
}
