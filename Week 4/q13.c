// Count the number of nodes in a BST

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int BSTreeCount(struct node *t) {
    if (t == NULL) {
        return 0;
    }

    return 1 + BSTreeCount(t->left) + BSTreeCount(t->right);
}
