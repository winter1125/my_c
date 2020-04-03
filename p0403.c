#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y,tmp)((tmp)=(x),(x)=(y),(y)=(tmp))

typedef struct class {
	int na;
	int num;
	int jum;
}class;

int main() {
	freopen("input.txt", "r", stdin);
	class s[105];
	int r=0,m[105];
	int num1, tmp;
	scanf("%d", &num1);

	for (int i = 0; i < num1; i++) {
		scanf("%d %d %d", &s[i].na, &s[i].num, &s[i].jum);

	}

	for (int i = 0; i < num1 - 1; i++) {
		for (int j = 0; j < num1 - i - 1; j++) {
			if (s[j].jum < s[j + 1].jum) {
				SWAP(s[j].na, s[j + 1].na, tmp);
				SWAP(s[j].num, s[j + 1].num, tmp);
				SWAP(s[j].jum, s[j + 1].jum, tmp);
			}
		}

	}

	for(int i = 0; r < 3; i++) {
	  if (m[s[i].na] == 2) continue;
		printf("%d %d\n", s[i].na, s[i].num);
		m[s[i].na]++;
		r++;
	}
}



