#include<stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
#include <string.h>

void main()
{
	int i, m, p;
	int k = 1000, dec = 0;
	int bm = 8;
	int data = 1235;
	//char  sub[4]="aaa";
	int su[4];

	//printf("%d\n", sizeof(sub));
	//printf("%d", strlen(sub));

	for (i = 0; i <= 3; i++) {
		su[i] = data / k;
		data = data % k;
		k = k / 10;

	}

	for (i = 0; i <= 2; i++) {
		m = 1;
		for (p = 0; p <= 2-i; p++)
			m *= bm;
		dec += su[i] * m;

	}

	dec += su[i];
	printf("%d\n", dec);

	printf("su[4]=%d", su[3]);
}

