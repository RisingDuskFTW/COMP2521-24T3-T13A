// Count the number of internal (non-leaf) nodes in a BSTree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

static int max(int x, int y);

int BSTreeHeight(struct node *t) {
    if (t == NULL) {
        return -1;
    }

    return 1 + max(BSTreeHeight(t->left), BSTreeHeight(t->right));
}

static int max(int x, int y) {
    return x < y ? y : x;
}
