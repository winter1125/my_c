#include <stdio.h>

char chk(int adesign[], int bdesign[]) {
	if (adesign[4] > bdesign[4])
		return 'A';
	else if (adesign[4] < bdesign[4])
		return 'B';
	else {
		if (adesign[3] > bdesign[3])
			return 'A';
		else if (adesign[3] <bdesign[3])
			return 'B';
		else {
			if (adesign[2] > bdesign[2])
				return 'A';
			else if (adesign[2] <bdesign[2])
				return 'B';
			else {
				if (adesign[1] > bdesign[1])
					return 'A';
				else if (adesign[1] < bdesign[1])
					return 'B';
				else
					return 'D';
			}
		}
	}
}

int main()
{
	freopen("input.txt", "r", stdin);

	int num1;
	int a, b;
	int adesign[5];
	int bdesign[5];
	int get;
	scanf("%d", &num1);

	for (int i = 0; i < num1; i++) {
		scanf("%d", &a);
		for (int k= 0; k < 5; ++k)
			adesign[k] = 0, bdesign[k] = 0;
		for (int j = 0; j < a; ++j) {
			scanf("%d", &get);
			adesign[get]++;
		}
		scanf("%d", &b);
		for (int j = 0; j < b; ++j) {
			scanf("%d", &get);
			bdesign[get]++;
		}
		char key = chk(adesign,bdesign);
		printf("%c\n", key);
		//for (int k = 0; k < 5; ++k)
		//	adesign[k] = 0, bdesign[k] = 0;
	}
	return 0;
}
