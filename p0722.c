#include<stdio.h>
#define MAX 4

typedef struct queue {
	int arr[MAX];
	int front, rear;
}Queue;

void init(Queue* p) {
	p->front= 0;
	p->rear = 0;
}

int  full(Queue* p) {
	if (indexAdd(p->rear) == p->front) 
		return 1;
	return 0;
}


void enqueue(Queue* p, int data) {
	if (full(p)) {
		printf("queue is Full...\n");
		return ;
	}
	p->arr[p->rear = indexAdd(p->rear)]=data;
}

int empty(Queue* p) {
	if (p->rear == p->front)
		return 1;
	return 0;
}

int dequeue(Queue* p) {
	if (empty(p)) {
		printf("Queue id empty...\n");
		return -1;
	}
	return p->arr[p->front = indexAdd(p->front)];
}

int indexAdd(int index) {
	if (index == MAX - 1)
		return 0;
		return index + 1;
}
void show(Queue* p) {
	if (empty(p)) {
		printf("Queue is E,pty...\n");
		return;
	}
	else {
		if (p->front < p->rear) {
			for (int i = p->front + 1; i <MAX; i++) {
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

void main(){
	Queue queue;
	init(&queue);
	enqueue(&queue, 10);
	enqueue(&queue, 20);
	enqueue(&queue, 30);
	enqueue(&queue, 40);
	enqueue(&queue, 50);
	enqueue(&queue, 60);
	enqueue(&queue, 70);
	enqueue(&queue, 80);
	enqueue(&queue, 90);

	dequeue(&queue);
	dequeue(&queue);
	show(&queue);
}