#include<stdio.h>

int main() {
	int inwon = 1;
	int base_use_time = 30;
	int base_price = 3000;
	int add_use_time = 1;
	int add_price = 50;
	int use_time = 0;
	int total_price = 0;

	printf("�� ź �ð�:");
	scanf("%d", &use_time);
	if (use_time < 0) {
		printf("����!\n");
	}
	else if (use_time <= base_use_time) {
		total_price = base_price;
	}
	else {
		total_price = ((use_time - base_use_time) / add_use_time * add_price);
		total_price += base_price;
	}
	printf("�̿�ð� %d��, �̿�ݾ�:%d��\n", use_time, total_price);
}
