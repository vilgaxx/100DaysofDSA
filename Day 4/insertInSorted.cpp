#include <iostream>
using namespace std;

int insertionS(int A[],int l, int key, int size) {

    if (l >= size)
    {
        return l;
    }
    
    int i;
    for ( i = l - 1 ; A[i] > key; i--)
    {
        A[i + 1] = A[i];
    }
    A[i + 1] = key;
    return (l + 1);
}

int main() {
    int arr[20] = {1,3,4,5,6,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int length = 8;
    int n = insertionS(arr, length, 2, size);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}