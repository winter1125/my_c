#include <stdio.h>
#define MAX 4

typedef struct queue {
	int arr[MAX];
	int front, rear;
}Queue;
void init(Queue* p) {						// 큐 초기화 함수
	p->front = p->rear = 0;
}
int indexAdd(int index) {					// 인덱스 위치 이동 함수
	if (index == MAX - 1)
		return 0;
	return index + 1;
}

int full(Queue* p) {		// 큐가 꽉 찼는지 확인하는 함수
	if (indexAdd(p->rear) == p->front)
		return 1;
	return 0;
}

void enqueue(Queue* p, int data) {	// 큐 데이터 삽입 함수
	if (full(p)) {			// full이 1을 반환하면
		printf("Queue is Full\n");	// 꽉 찼으므로 예외 메시지를 출력하고
		return;							// 데이터 삽입을 막는다.
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