#include<stdio.h>
void main() {
	int a, b, c, won;
	freopen("input.txt","r",stdin);
	scanf("%d %d %d %d", &a, &b, &c, &won);

	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if (i*a + j * b + k *c == won) {
					printf("%d", 1);
					return;
				}
			}
		}
	}
	printf("%d", 0);
	fclose(stdin);
	return 0;
}
