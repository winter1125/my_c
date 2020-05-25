#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	char num[100];
	printf("6개의 숫자 입력하세요\n");
	gets(num);
	int sum = 0, c = 0, ind = 0;
	int i, j;

	for (i = 0; i < strlen(num); i++) {
		if (num[i] >= '0' & num[i] <= '9')
			c++;
		if (c == 3) {
			if (ind != 0) printf("+");
			for (j = ind; j <= i; j++) {
				if (num[j]!=' ') {
					printf("%c", num[j]);
					sum += (num[j] - '0') * pow(10, c-- - 1);
				}
			}
			ind = i + 1;
		}
	}
	printf("=%d", sum);
}
