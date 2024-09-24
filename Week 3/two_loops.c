#include <stdio.h>

#define N 100

// Time Complexity: O(n)
void loop1() {
    for (int i = 1; i <= N; i++) { // n comparisons
        printf("%d\n", i);              // constant time = 1
    }
}

// Time Complexity: O(log(n))
void loop2() {
    for (int i = 1; i <= N; i *= 2) {
        printf("%d\n", i);
    }
}

int main() {
    // loop1();
    printf("==========\n");
    loop2();
}
