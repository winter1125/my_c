#include <stdio.h>

int main()
{
	int i, sum;
	
	for(i=1;i<=100;i++){
		if(i%3==0){
			sum=sum+i;
			printf("3�� ����� ���� %d�̴�.\n", sum);
	}
			if(sum>=100)
			break;
			

	}

	return 0;
}
