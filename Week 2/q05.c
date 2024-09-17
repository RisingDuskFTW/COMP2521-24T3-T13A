// Iterative and recursive function to count the length of a linked list

#include <stdio.h>

struct node {
	int data;
	struct node *next;
};

struct list {
    struct node *head;
};

int doListLength(struct node *n);

// Solution 3: Recursive Solution and Representation 2
int listLength(struct list *l) {
    return doListLength(l->head);
}

int doListLength(struct node *n) {
    // base case
    if (n == NULL) {
        return 0;
    }

    // recursive case
    return 1 + doListLength(n->next);
}
