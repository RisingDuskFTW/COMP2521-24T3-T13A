// Iterative and recursive function to check if a linked list is sorted

#include <stdio.h>
#include <stdbool.h>

struct node {
	int data;
	struct node *next;
};

// Solution 1: Iterative Solution
bool listIsSorted(struct node *l) {
	if (l == NULL) {
		return true;
	}

    for (struct node *curr = l; curr->next != NULL; curr = curr->next) {
        if (l->data > l->next->data) {
			return false;
		}
    }

    return true;
}

// Solution 2: Recursive Solution
bool listIsSortedRec(struct node *l) {
	// base case
	if (l == NULL || l->next == NULL) {
		return true;
	}

	if (l->data > l->next->data) {
		return false;
	}

	return listIsSortedRec(l->next);
}
