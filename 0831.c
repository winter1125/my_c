#include<stdio.h>
void main() {
	int a, b, m = 7;
	for (a = 1; a <= m; a++)
	{
		if ((a % 2) == 0)
		{
			b = a * 3;
			while (b >= a * 3 - 2) {
				printf("%d ", b);
				b--;
			}
			printf("\n");

		}

		else

		{
			b = a * 3 - 2;
			while (b <= a * 3)
			{
				printf("%d", b);
				b++;
			}
			printf("\n");

		}
	}
}