#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Can we allocate to the heap rather than the stack?
	int *a = malloc(5 * sizeof(int));
	for (int i = 0; i < 5; i++) {
		a[i] = 42;
	}
}
