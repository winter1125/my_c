#include <stdio.h>
//
void main() {
	int a,b;
	int m = 7;
	printf("output");
	for (a = 1; a <= m; a++) {
		if ((a % 2) == 0)
		{
			b = a * 3;
			while (b >= a * 3 - 2) {
				printf(" %5d", b);
				b--;
			}
			printf("\n");
		}
		else
		{
			b = a * 3 - 2;
			while (b <= a * 3) {
				printf(" %5d", b);
				b++;
			}
			printf("\n");

		}
	}

}