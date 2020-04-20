#include <stdio.h>
#include <stdlib.h>

	int arr[20][4] = { 0 };
	int arr2[20] = { 0 };
	int n,k,i, j;
	int time, money;
	int best;

	void gbest(int nk){

		if (n == nk)
		{
			time = 0;
			for (i = 0; i < n; i++)
			{
				time += arr[i][arr2[i]];
				if (time <= k)
				{
					money = 0;
					for (i = 0; i < n; i++)
					 money += arr[i][arr2[i] + 1];
					if (best < money) best = money;
				}
				return;

			}

			arr2[nk] = 0;
			gbest(nk+ 1);
			arr2[nk] = 2;
			gbest(nk + 1);
		}
	}

		int main(){

			scanf("%d%d", &n, &k);
			for (int i = 0; i < n; i++)
				scanf("%d",  &arr[i][j]);
			gbest(0);
			printf("%d", best);
			return 0;
	}



