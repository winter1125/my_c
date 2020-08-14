#include <stdio.h>
#include <stdlib.h>
//#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
#define S1(a) a*a
#define S2(a) ((a)*(a))
#define MAX(a,b)(((a)>(b))?(a):(b))

main() {
	int a1 = 3, a2 = 5;
	int b, c, d;
	b = S1(a1 + a2);
	c = S2(a1 + a2);
	d = MAX(a1, a2);
	printf("S1=%d, S2=%d, MAX=%d\n", b, c, d);

}