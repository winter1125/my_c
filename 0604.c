#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int a = 248;
	int b = 235;
	int c = -132;
	int d = -148;
	printf("%d", ~a|a^b);
}