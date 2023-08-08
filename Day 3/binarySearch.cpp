// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int l, int h, int key)
{
	while (l <= h) {
		int m = (l + h) / 2;

		// Check if x is present at mid
		if (arr[m] == key)
			return m;

		// If x greater, ignore left half
		if (arr[m] < key)
			l = m + 1;

		// If x is smaller, ignore right half
		else
			h = m - 1;
	}

	// If we reach here, then element was not present
	return -1;
}

// Driver code
int main(void)
{
	int arr[] = { 4, 8, 10, 12, 15, 18, 21, 24, 27, 29, 33,34 };
	int key = 21;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, key);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
