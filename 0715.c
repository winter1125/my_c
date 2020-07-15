#include<stdio.h>
#define SQ1(n)n*n
#define SQ2(n)(n*n)
#define SQ3(n)((n)*(n))
#define MAX 8
void sort(char* item, int cnt);

void main() {
	char str[MAX] = "peajade";
	sort(str, MAX);

}

void sort(char* item, int cnt) {
	int j, k;
	char temp;
	for (j = 1; j < cnt; j++) {
		temp = item[j];
		k = j - 1;
		while (k >= 0 && temp < item[k])
		{
			item[k + 1] = item[k];
			k--;
		}
		item[k+1] = temp;
		printf("%s \n", item);
	}
}