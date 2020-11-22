#include <stdio.h>
#include<stdlib.h>



	int a[] = { 2,4,5,1,6,3,0 };

	int* rcount(int* a, int low, int high, int d) {
		int i;
		int* p = malloc(d * sizeof(int));
		for (i = 0; i < d; i++)
			p[i] = 0;
		for (i = low; i <= high; i++)

			p[a[i] % d]++;
		return p;
	}

	int linkcount(int s, int t) {
		int nlinks = 0;
		while (s != t) {
			s = a[s];
			nlinks++;
		}
		return nlinks;
	}

	int f(int x) {
		static int id = 2;
		id = a[id];
		return id + x;
	}

	int g(int x) {
		static int val = 3;
		return val += x;
	}

	int main(void) {
		int b[] = { 12,19,15,26,29, 21, 14 , 32, 17, 22, 23 };
		int* p = rcount(b, 2, 8, 3);

		printf("%d ", p[2]);
		printf("%d ", linkcount(5, 6));
		g(5);
		printf("%d ", g(f(4)));
		return 0;
	}



