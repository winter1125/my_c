#include <stdio.h>
#include <stdlib.h>
#define MAX(a,b)(((a)>(b))? (a): (b))
#define MAX_DEGREE 101


int main(void)
{
	int a, b, cnt = 0;
	int n = 10;
	for(a=1; a<=n; a++)
	{ 
		for (b = a; b > 0; b--)
		{
			if (a% b == 0) cnt++;
		}
		if (cnt == 2) printf("%2d", a);
		cnt = 0;

	}
	return 0;
	}
