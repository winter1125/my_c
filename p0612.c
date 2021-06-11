#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define MAX_DEGREE 101
#define ROWS 3
#define COLS 3

#define PR printf

main()
{
	int son[20][20];
	int i, j, y, n, k = 0, sw = 1;

	n = 5;
	for(i = 1; i <= n; i++)
	{
		if (sw == 1)
			y = 1;
		else
			y = n;

		for (j = 1; j <= n; j++) {
			k++;
			son[i][j] = k;
			y += sw;
		}
		sw = sw * -1;
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			PR("%5d", son[i][j]);
		printf("\n");
	}
}
