#include<iostream>
using namespace std;

void Rearrange(int A[], int n) {
    int i= 0;
    int j = n-1;

    while (i<j)
    {
        while(A[i]<0)i++;
        while(A[j]>0)j--;
        if (i<j)
        {
            swap(A[i],A[j]);
        }

    }
    cout << "Resulting array is: ";
    for(int i = 0 ; i < n; i++) {
        cout << A[i] <<" ";
    }
    
}

int main() {

    // given array
    int arr[] = {1 , -2 , 4 , -6, -3, 9};

    // calculate size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // call the function
    Rearrange(arr , n);
   
    // print the result
    
}