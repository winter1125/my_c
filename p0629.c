#include<stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
#include <string.h>

void main()
{
	char c[11] = "ILove Korea";
	int a, m = 0, n = 0;

	for (a = 0; a <= 9; a++)
	{
		if (c[a] >= 65 && c[a] <= 90)
			m = m + 1;
		else
		{
			n = n + 1;
			c[a] = c[a] - 32;
		}
	}

	printf("%d %d\n", m, n);
	for(a=0; a<=9;a++)
	printf("%c", c[a]);
	printf("\n");
}

