#include<stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

void perm(char list[], int k, int n){
	int j, temp;
	if (k == n) {
		for (j = 0; j <= n; j++)
			printf("%c", list[j]);
		perm(list, k + 1, n);
		printf("\n");

	}
	else
	{
		for(j=k; j<=n; j++){

		SWAP(list[k], list[j], temp);
		perm(list, k + 1, n);
		SWAP(list[k], list[j], temp);
	}
}
}

main() {
	char s[] = { 'a','b','c' };
	perm(s, 0, 2);
	return 0;
}
