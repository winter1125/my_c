#include <stdio.h>

#define MAX 100

int main() {
	int numbers[MAX];
	int n;
	printf("총 데이터 수 : ");
	scanf("%d", &n);
	printf("오름차순 데이터 입력 : ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}

	int count = 0;
	int key;
	printf("찾고자 하는 값 : ");
	scanf("%d", &key);

	// 이진 탐색
	int left = 0, right = n - 1;
	int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		count++;
		if (key == numbers[mid]) {
			break;
		}
		else if (key > numbers[mid]) {
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}

	printf("총 탐색횟수 : %d\n", count);

	return 0;
}