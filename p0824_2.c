#include <stdio.h>

#define MAX 100

int main() {
	int numbers[MAX];
	int n;
	printf("�� ������ �� : ");
	scanf("%d", &n);
	printf("�������� ������ �Է� : ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &numbers[i]);
	}

	int count = 0;
	int key;
	printf("ã���� �ϴ� �� : ");
	scanf("%d", &key);

	// ���� Ž��
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

	printf("�� Ž��Ƚ�� : %d\n", count);

	return 0;
}