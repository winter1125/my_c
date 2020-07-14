#include <stdio.h>
#include <stdlib.h>
//#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
#define SQ1(n)n*n
#define SQ2(n)(n*n)
#define SQ3(n)((n)*(n))

main() {
	int i = 0, k;
	while (i <= 5)
	{
		k = i;
		printf("i=%d %5d %5d %5d\n", i, SQ1(i+1), SQ2(++i), SQ3(k + 1))
	}
}
