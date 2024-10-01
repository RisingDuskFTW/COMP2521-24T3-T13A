// Find the level that a given value is in the tree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

// Time Complexity = O(h)
int BSTNodeLevel(struct node *t, int key) {
	// base case: empty tree
	if (t == NULL) {
		return -1;
	}

	if (t->value == key) {
		return 0;
	}

	if (key < t->value) {
		int level = BSTNodeLevel(t->left, key);
		if (level == -1) return -1;
		return level + 1;
	}
	int level = BSTNodeLevel(t->right, key);
	if (level == -1) return -1;
	return level + 1;
}
