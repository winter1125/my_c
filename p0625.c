#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 200

int main()
{
	freopen("input.txt", "r", stdin);
	char arr[] = "i have onLY 5 BALls.";
	const char * digit[] = { "zero","one", "two", "three", "four", "five", "six","seven","eight", "nine" };

	//char arr[MAX + 1];
	fgets(arr, sizeof(arr), stdin);

	if (arr[0] >= 'a' && arr[0] <= 'z')
	{
		//arr[0] = arr[0] - 32;
		printf("%c", arr[0] - 32);
	}

	int len;
	len = sizeof(arr);

	for (int i = 1; i < len; i++) {
		if ((arr[i - 1] == ' ' && arr[i] == 'i' && arr[i + 1] == ' ') ||
			(arr[i - 1] == ' ' && arr[i] == 'i' &&
			(arr[i + 1] == '.' || arr[i + 1] == '!' || arr[i + 1] == '?'))) {
			printf("I");
		}
		else if (arr[i] >= '0' && arr[i] <= '9') { printf("%s", digit[arr[i] - '0']); }

		else if (arr[i] >= 'A' && arr[i] <= 'Z') {

			arr[i] = arr[i] + 32;
			printf("%c", arr[i]);
		}
		else {
			printf("%c", arr[i]);
		}
	}

}


