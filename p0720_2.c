#include <stdio.h>
#define MAX 4

typedef struct queue {
	int arr[MAX];
	int front, rear;
}Queue;
void init(Queue* p) {						// ť �ʱ�ȭ �Լ�
	p->front = p->rear = 0;
}
int indexAdd(int index) {					// �ε��� ��ġ �̵� �Լ�
	if (index == MAX - 1)
		return 0;
	return index + 1;
}

int full(Queue* p) {		// ť�� �� á���� Ȯ���ϴ� �Լ�
	if (indexAdd(p->rear) == p->front)
		return 1;
	return 0;
}

void enqueue(Queue* p, int data) {	// ť ������ ���� �Լ�
	if (full(p)) {			// full�� 1�� ��ȯ�ϸ�
		printf("Queue is Full\n");	// �� á���Ƿ� ���� �޽����� ����ϰ�
		return;							// ������ ������ ���´�.
	}
	p->arr[p->rear = indexAdd(p->rear)] = data;
}

int  Empty(Queue* p) {
	if (p->rear == p->front)
		return 1;
	return 0;
}

int dequeue(Queue* p) {
	if (Empty(p)) {
		printf("Queue is Empty...\n");
		return -1;
	}
	return p->arr[p->front = indexAdd(p->front)];
}


void show(Queue* p) {
	if (Empty(p)) {
		printf("Queue is Empty\n");
		return;
	}
	else {
		if (p->front < p->rear) {
			for (int i = p->front + 1; i < MAX; i++) {
				printf("%d ", p->arr[i]);
			}
		}
		else if (p->front > p->rear) {
			for (int i = 0; i <= p->rear; i++) {
				printf("%d ", p->arr[i]);
			}
		}
		printf("\n");
	}
}


void main() {
	Queue queue;
	init(&queue);
	enqueue(&queue, 10);
	enqueue(&queue, 20);
	enqueue(&queue, 30);
	dequeue(&queue);

	show(&queue);
}