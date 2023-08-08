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
    
}

int main() {
    struct aList arr= {{2,3,4,5,6},20,5};

    display(arr);

    return 0;
}