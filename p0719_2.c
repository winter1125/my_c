#include <stdio.h>
#include<string.h>



int p(int a)
{
	if (a == 1) return 1;
	if (a == 2) return 2;
	return p(a - 1) + p(a - 2);
}

int digit(char a)
{
	return a - '0';

}

void main() {
	char a[20] = "21345";
	int i, len, s = 0;
	len = strlen(a);
	for (i = 0; i < len; i++) {
		s = s + p(len - i) * digit(a[i]);
	}
	printf("%d\n", s);
}