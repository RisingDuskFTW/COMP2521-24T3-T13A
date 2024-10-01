// Count the number of internal (non-leaf) nodes in a BSTree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int BSTreeCountInternal(struct node *t) {
	// empty tree
	if (t == NULL) {
		return 0;
	}
	// leaf node
	if (t->left == NULL && t->right == NULL) {
		return 0;
	}

	// recursive case
    return 1 + BSTreeCountInternal(t->left) + BSTreeCountInternal(t->right);
}
