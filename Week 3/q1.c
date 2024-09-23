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

// Time Complexity: O(...)
bool isPalindrome(char *s) {
    // TODO
    return false;
}
