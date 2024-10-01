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
	// TODO
}

int QueueDequeue(Queue q) {
	// TODO
	return 42;
}
