// Count the number of odd values in a BST

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int BSTreeCountOdds(struct node *t) {
	if (t == NULL) {
		return 0;
	}
	int count = 0;
	if (t->value % 2 == 1) {
		count++;
	}
    count += BSTreeCountOdds(t->left);
    count += BSTreeCountOdds(t->right);
	return count;
}
