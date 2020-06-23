#include<stdio.h>
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))

void main()
{
	char mun[] = "computer architecture";
	int cnt, a, b, top = 0;

	for (a = 0; a <= 4; a++)
	{
		cnt = 0;
		for (b = a; b <= 21; b++)
		{
			if (mun[a] == mun[b])
				cnt = cnt + 1;

		}
		if (cnt > top)
			top = cnt;

	}

	printf("%d\n", top);

}

