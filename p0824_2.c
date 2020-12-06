#include <stdio.h>

const int N = 100;
int edg[N][N], cnt[N];

void adg(int x, int y)
{
	edg[x][++cnt[x]] = y;
	edg[y][++cnt[y]] = x;
}

int main() {
	int i, sum = 0;
	adg(1, 2);
	adg(1, 3);
	adg(2, 1);
	adg(2, 4);
	adg(3,1);
	adg(4, 2);

	for (i = 1; i <= 4; i++)
		sum += cnt[i];
	printf("%d ,\n", sum);
	return 0;


}

