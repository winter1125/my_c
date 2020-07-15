#include<stdio.h>
void sort(int list[], int n) {
	int i, j, k;
	int m_value, m_index;
	for (i = 0; i < n - 1; i++) {
		m_value = list[i];
		m_index = i;
		for (j = i + 1; j < n; j++) {
			if (m_value > list[j]) {
				m_value = list[j];
				m_index = j;
			}
		}

		if (m_index != i){
			list[m_index] = list[i];
			list[i] = m_value;
		}
		if (i == 5)
			for (k = 0; k < n; k++)
				printf("%d ", list[k]);
	}
}

void main() {
	int list[] = { 12,2,16,30,8,28,4,10,20,6,18 };
	sort(list, 11);
}
