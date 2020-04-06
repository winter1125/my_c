#include <stdio.h>
#include <stdlib.h>
#define BYTE 8
#include<string.h>

void main(void) {
	int n, i, tmp, flag = 0;

	n = 35;

	for (i = sizeof(int)*BYTE; i > 0; i--) {
		tmp = (((1 << i - 1)&n) >> i - 1);
		if (flag == 0) {
			if (tmp == 0)
			{
				if (tmp == 1)
					flag = 1;
				else
					continue;
			}
			printf("%d", tmp);

		}
		printf("\n");

	}
}
