#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>

void main()
{
	int a, b;
	int i;
	int sum = 0;
	scanf("%d%d", &a, &b);
	if (a <= 0 && a >= 1000)


		return;
	if (b <= 0 && b >= 1000)
		return;


	for (i = a; i <= b; i++)
	{
		if (i % 3 == 0)
		{
		    sum=sum+i;
			}


}

	}
