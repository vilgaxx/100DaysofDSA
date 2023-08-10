#include<iostream>
using namespace std;

void mergeArrays(int a[], int b[], int n1, int n2, int c[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j <  n2) 
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
            c[k++] = b[j++];
        
    }

    while (i < n1)
    {
        c[k++] = a[i++];
    }
    while (j < n2)
    {
        c[k++] = b[j++];
    }
    
    
}

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    int arr2[] = {2, 4, 6, 8};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
 
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);
 
    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";
 
    return 0;
}