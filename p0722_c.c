#include<stdio.h>

double power(int x, int y){
return x << (y-1);
	//return
}

main() {
	int x = 2, y;
	double d;

	for (y = 2; y <= 6; y++)
	{
		d = power(x, y);
		printf("%5d ^ %2d=%5.0f\n", x, y, d);	}
}
