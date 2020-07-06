#include <stdio.h>
#include <stdlib.h>

#define SWAP(x,y,t)((t)=(x), (x)=(y), (y)=(t))

main()
{
	int i, j, sum = 0;
	for (i = 0; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			if (j % 3 == 0) continue;
			if(i % 4 == 0) break;
			sum++;
		}
	}
	printf("%d\n", sum);



}
