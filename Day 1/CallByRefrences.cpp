#include<iostream>

using namespace std;

int swap(int &a, int *b) {
    int temp = a;
    a = *b;
    *b = temp;
}

int main() {
    // int a = 10;
    // int &r = a;
    // cin>>r;
    // r++;
    // cout<<a<<"\t"<<r;

    int a= 5, b = 15;
    swap(a, b);
    cout<<a<<'\t'<<b;
    return 0;
}


// it takes same memory it is just a another name define using & of same variable  