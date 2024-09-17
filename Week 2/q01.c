// Iterative and recursive function to count the length of a linked list

#include <stdio.h>

struct node {
	int data;
	struct node *next;
};

// Solution 1: Iterative Solution
int listLength(struct node *l) {
    int count = 0;
    for (struct node *curr = l; curr != NULL; curr = curr->next) {
        count++;
    }

    return count;
}

// Solution 2: Recursive Solution
int listLengthRec(struct node *l) {
    // base case
    if (l == NULL) {
        return 0;
    }

    // recursive case
    return 1 + listLengthRec(l->next);
}
