#include <stdio.h>

int main()
{
	int i, sum;
	
	for(i=1;i<=100;i++){
		if(i%3==0){
			sum=sum+i;
			printf("3의 배수의 합은 %d이다.\n", sum);
	}
			if(sum>=100)
			break;
			

	}

	return 0;
}
