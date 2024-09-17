// Iterative and recursive function to count the number of odd numbers in a
// linked list

#include <stdio.h>

struct node {
	int data;
	struct node *next;
};

// Solution 1: Iterative Solution
int listCountOdds(struct node *l) {
    int count = 0;
    for (struct node *curr = l; curr != NULL; curr = curr->next) {
        if (l->data % 2 == 1) {
            count++;
        }
    }

    return count;
}

// Solution 2: Recursive Solution
int listCountOddsRec(struct node *l) {
    // base case
    if (l == NULL) {
        return 0;
    }

    // recursive case
    return (l->data % 2) + listCountOddsRec(l->next);
}
