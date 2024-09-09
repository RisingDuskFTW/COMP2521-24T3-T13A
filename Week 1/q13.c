#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node *next;
};

int main(void) {
	// Can we allocate to the heap rather than the stack?
	struct node n;
	n.value = 42;
	n.next = NULL;
}
