#include <stdio.h>
#include <stdlib.h>

#define SWAP(x,y,t)((t)=(x), (x)=(y), (y)=(t))

void perm(char list[], int k, int n) {
	int j, temp;

	if (k == n) {
		for (j = 0; j <= n; j++)
			printf("%c", list[j]);
		printf("\n");
	}

	else
	{
		for (j = k; j <= n; j++) {
			SWAP(list[k], list[j], temp);
			perm(list, k + 1, n);
			SWAP(list[k], list[j], temp);
		}
	}
}

main()
{
	char s[] = { 'a','b','c' };
	perm(s, 0, 2);
	    



}