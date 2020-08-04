#include <stdio.h>
#include <stdlib.h>


int a = 5, b = -3, c = -7l;
main() {
	{
	int b = 8;
	float c = 9.9;
	printf("%d %d %f\n", a, b, c);
	a = b;
	{
		int c;
		c = b;
		printf("%d %d %f \n", a, b, c);
	}

	printf("%d %d %f\n", a, b, c);
}
printf("%\d %d %d\n", ++a, ++b, ++c);
}
