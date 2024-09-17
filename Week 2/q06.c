// Recursive function to solve the Towers of Hanoi Problem
// https://www.mathsisfun.com/games/towerofhanoi.html

#include <assert.h>
#include <stdio.h>

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod);

int main(void) {
    solveHanoi(3, "A", "C", "B");
}

void solveHanoi(int numDisks, char *fromRod, char *toRod, char *otherRod) {
    assert(numDisks > 0);

    // base case
    if (numDisks == 1) {
        printf("Move disk from Rod %s to Rod %s\n", fromRod, toRod);
        return;
    }

    // recursive case
    solveHanoi(numDisks - 1, fromRod, otherRod, toRod);
    printf("Move disk from Rod %s to Rod %s\n", fromRod, toRod);
    solveHanoi(numDisks - 1, otherRod, toRod, fromRod);
}
