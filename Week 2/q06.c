// Recursive function to solve the Towers of Hanoi Problem
// https://www.mathsisfun.com/games/towerofhanoi.html

#include <assert.h>
#include <stdio.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod);

int main(void) {
    solveHanoi(4, "A", "C", "B");
}

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    assert(numDisks > 0);

    // TODO
}
