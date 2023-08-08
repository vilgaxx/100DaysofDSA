#include<iostream>
using namespace std;

struct aList {
    int A[20];
    int size;
    int length;
};

void display(struct aList arr) {
    for (int i = 0; i < arr.length; i++)
    {
        cout<<arr.A[i];
    }
    cout<<endl;
    
}

int insertion(struct aList *arr, int index, int n) {
    if (index >= 0 && index <= arr->length) {
        for (int i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = n;
        arr->length++;
    }   
} 

int main() {
    struct aList arr= {{2,3,4,5,6},20,5};

    display(arr);

    insertion(&arr,5,1);

    display(arr);

    return 0;
}