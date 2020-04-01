#include <stdio.h>
#include<stdlib.h>

void Print(int *a, int num1)
{
	int i;
	for (i = 0; i < num1; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

void RadixSort(int *a, int num1)
{
	int i, b[100], m = 0, exp = 1;

	for (i = 0; i < num1; i++)
	{
		if (a[i] > m)
			m = a[i];
	}

	while (m / exp > 0)
	{
		int bucket[10] = { 0 };

		for (i = 0; i < n; i++)
			bucket[a[i] / exp % 10]++;

		for (i = 1; i < 10; i++)
			bucket[i] += bucket[i - 1];

		for (i = n - 1; i >= 0; i--)
			b[--bucket[a[i] / exp % 10]] = a[i];

		for (i = 0; i < n; i++)
			a[i] = b[i];

		exp *= 10;
}

}


int main()
{
	freopen("input.txt", "r", stdin);
	int arr[100];
	int i, num1;


	scanf("%d", &num1);

	for (i = 0; i < num1; i++)
		scanf("%d", &arr[i]);

	printf("####### sorting before ######\n");

	for (i = 0; i < num1; i++){
		printf("%d", arr[i]);
	}
	//Print(&arr[0], num1);
	RadixSort(&arr[0], num1);
	//Print(&arr[0], n);
	printf("####### sorting after ######\n");
	Print(&arr[0], num1);


	return 0;
}
