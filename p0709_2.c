#include <stdio.h>
#include <stdlib.h>
//#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

void align(int a[]) {
	int temp;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++)
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1]; temp;
				//printf(" %d\t", a[j]);
			}
		printf(" %d\t", a[i]);
	}
}

main() {
	int a[] = { 85,75,50,100,95 };
		align(a);
		printf("\n");
	for (int i = 0; i < 5; i++)printf("%d ", a[i]);
}
