#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// Can we allocate to the heap rather than the stack?
	int a[5];
	for (int i = 0; i < 5; i++) {
		a[i] = 42;
	}
}
