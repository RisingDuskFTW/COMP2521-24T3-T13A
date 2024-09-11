#include <stdio.h>

void swap(int *a, int *b);

int main(void) {
	int a = 5;
	int b = 7;
	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
}

// Why doesn't this work???
void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
