#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(...)
int f1(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i % 3;
    }
    return sum;
}

// Time Complexity: O(...)
int f2(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + f2(n / 3);
}

// Time Complexity: O(...)
int f3(int n) {
    int count = 0;
    int sum = 0;
    while (count < (n / 2)) {
        sum += f2(count);
        count++;
    }
    return sum;
}

// f1 = O(n)
// f2 = O(log(n))
// f3 = O(n * log(n))
void f4(int n) {
    // Time Complexity: O(...)
    int sum = f1(n) + f2(n);

    // Time Complexity: O(...)
    for (int i = 0; i < n; i++) {
        f2(i);
    }

    // Time Complexity: O(...)
    for (int i = 0; i < n; i *= 2) {
        f2(i);
    }

    // Time Complexity: O(...)
    for (int i = 0; i < n; i++) {
        f1(i);
        for (int j = 0; j < n; j++) {
            f2(j);
        }
    }

    // Time Complexity: O(...)
    for (int i = 0; i < n; i++) {
        f1(i);
        for (int j = 0; j < n; j *= 2) {
            f2(j);
        }
    }

    // Time Complexity: O(...)
    for (int i = 0; i < n; i++) {
        f1(i);
        for (int j = 0; j < n; j *= 2) {
            f3(j);
        }
    }
}
