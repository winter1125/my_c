#include <stdio.h>
#include <stdlib.h>
//#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))


int sum(int n) {
	printf("%d\n", n);
	if (n < 1) return 1;
	else return (n + sum(n - 1));
}
void main()
{
	printf("sum=%d", sum(5));
}