#include <stdio.h>

int main()
{
	int num=-1, num2=0;
	
	while(num<10||num>99999999){
		printf("���� ������ �Է�:");
		scanf("%i", &num); 
	}
	
	while(num>0){
		num2 *=10;
		num2 += num%10;
		num /= 10;
	}	
	
	printf("������ ��:%i \n", num2);
	
	return 0;
}
