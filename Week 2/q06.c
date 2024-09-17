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

    // base case -> only move the one rod
    if (numDisks == 1) {
        printf("Move disk from Rod %s to Rod %s\n", fromRod, toRod);
        return;
    }

    // recursive case:
    // – need to relocate n - 1 stack to other rod
    // – move nth disk to to rod
    // – relocate n - 1 stack to to rod
    solveHanoi(numDisks - 1, fromRod, otherRod, toRod);
    printf("Move disk from Rod %s to Rod %s\n", fromRod, toRod);
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}
