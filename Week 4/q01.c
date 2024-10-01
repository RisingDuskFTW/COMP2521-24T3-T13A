// Using a Stack ADT

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

struct queue {
	Stack s1;
	Stack s2;
};

typedef struct queue *Queue;

Queue QueueNew(void) {
	Queue q = malloc(sizeof(struct queue));
	q->s1 = StackNew();
	q->s2 = StackNew();
	return q;
}

void QueueFree(Queue q) {
	StackFree(q->s1);
	StackFree(q->s2);
	free(q);
}

void QueueEnqueue(Queue q, int item) {
	// move all elements from s1 to s2
	while (StackSize(q->s1) > 0) {
		int it = StackPop(q->s1);
		StackPush(q->s2, it);
	}
	// add new item to s2
	StackPush(q->s2, item);
	// move all elements from s2 to s1
	while (StackSize(q->s2) > 0) {
		int it = StackPop(q->s2);
		StackPush(q->s1, it);
	}
}

int QueueDequeue(Queue q) {
	int item = StackPop(q->s1);
	return item;
}
