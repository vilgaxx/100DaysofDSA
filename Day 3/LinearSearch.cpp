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

// to improve and optimise linear search 
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int linSearch(struct aList *arr, int key) {
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {   
            swap(&arr->A[i],&arr->A[i-1]);
            return i;
        } 
    }
    return -1;
}

int main() {
    struct aList arr= {{2,3,4,5,6},20,5};

    display(arr);

    cout<<linSearch(&arr,6)<<endl;
    display(arr);


    return 0;
}