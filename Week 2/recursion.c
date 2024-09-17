#include <stdio.h>
#include <assert.h>

int factorial(int num);

int main(void) {

    printf("%d\n", factorial(5));
    printf("%d\n", factorial(8));
    printf("%d\n", factorial(12));
    printf("%d\n", factorial(0));
    printf("%d\n", factorial(1));

    return 0;
}

// recursive function to calculate the factorial of a number
int factorial(int num) {
    assert(num >= 0);

    // base case
    if (num == 1 || num == 0) {
        return 1;
    }

    // recursive case
    return num * factorial(num - 1);
}
