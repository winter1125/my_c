#include<stdio.h>
#include<stdlib.h>


void main() {
	char data[10] = { 1,2,3,4,5,6,7,8,9,10};


	int len;
	len = sizeof(data);
	printf("%d \n", len);
	char* p = data;
	int sum = 0;
	
	for (int i = 0; i < len; i++)
	{
		sum = sum + *p;
		p++;
	}

	printf("%d ", sum);
}