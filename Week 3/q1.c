// Program that takes a string and returns if its a palindrome or not

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s);

int main(int argc, char **argv) {
    if (argc == 2) {
        if (isPalindrome(argv[2])) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}

// Time Complexity: O(n)
bool isPalindrome(char *s) {
    // how long is the string
    int lo = 0;
    int hi = strlen(s) - 1;   // O(n)
    //  compare the first and last letter
    // bubble inwards, comparing letters
    // stop once we reach the middle
    while (lo < hi) {       // O(n/2)
        if (s[lo] != s[hi]) {
            return false;
        }
        lo++;
        hi--;
    }
    return true;
}
