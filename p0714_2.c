#include <stdio.h>
#include <stdlib.h>
//#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

main() {
	int x;
	for (x = 1; x <= 7; x++) {
		if (x == 5)
			continue;
		else if (x == 6)
			break;
		printf("%d", x);
	}
}