// C++ program to implement recursive Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
	if (high >= low) {
		int mid = low + (high - low) / 2;

	
		if (arr[mid] == key)
			return mid;

		if (arr[mid] > key)
			return binarySearch(arr, low, mid - 1, key);
		return binarySearch(arr, mid + 1, high, key);
	}
	return -1;
}

int main()
{
	int arr[] = { 4, 8, 10, 12, 15, 18, 21, 24, 27, 29, 33, 34 };
	int key = 33;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, key);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
