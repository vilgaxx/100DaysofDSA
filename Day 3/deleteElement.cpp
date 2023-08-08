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

void del(struct aList *arr, int index) {
    if(index >=0 && index < arr->length) {
        for (int i = index; i < arr->length-1; i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;        
    }
}

int main() {
    struct aList arr= {{2,3,4,5,6},20,5};
    display(arr);
    del(&arr,4);
    display(arr);
    return 0;
}