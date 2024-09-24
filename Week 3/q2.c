// Program that takes an array and a value v, and determines if there is a sum
// of two values to v in the array

#include <stdio.h>
#include <stdbool.h>

// Time Complexity: O(n^2)
bool hasTwoSum(int a[], int n, int v) {
	// for all values x in a
	for (int i = 0; i < n; i++) {
		// for all other values y in a
		for (int j = i + 1; j < n; j++) {
			// if they sum to v, return true
			if (a[i] + a[j] == v) {
				return true;
			}
		}
	}
	return false;
}


// 2 5 8 3
// v = 6
