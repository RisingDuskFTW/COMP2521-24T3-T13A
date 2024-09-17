// Recursive function to delete the first instance of a given value
// from a linked list, if it exists

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

// Recursive Solution
struct node *listDelete(struct node *l, int value) {
    if (l == NULL) {
        return l;
    }

    struct node *restOfList = l->next;
    // recursive case
    if (l->data == value) {
        free(l);
        return restOfList;
    }

    l->next = listDelete(restOfList, value);
    return l;
}
