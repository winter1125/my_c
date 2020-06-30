#include<stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
#include <string.h>

void main()
{
	int i, m, p;
	int k = 1000, dec = 0;
	int bm = 8;
	int data = 1235;
	int su[4];

	for (i = 0; i <= 3; i++)
	{
		su[i] = data / k;
		data = data % k;
		k = k / 10;
	}

	for (i = 0; i <= 2; i++) {
		m = 1;
		for (p = 0; p <= 2 - i; p++)
			m *= bm;
		dec += su[i] * m;

	}
	dec += su[i];
	printf("%d\n", dec);
	printf("su[3]=%d", su[3]);
}

