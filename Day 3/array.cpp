#include <iostream>
using namespace std;

int main () {
    
    int A[4]= {1,2,3,4};
    // for(int i = 0; i<n; i++) {
    //     cin>>A[i];
    // }
    for(int i = 0; i<4; i++) {
        cout<<A[i];
    }

    // int x = A[1];
    cout << " "<<A[1] <<endl;
    for (int i = 1; i < 3; i++)
    {
        /* code */
        A[i] = A[i+1];
    }
    for(int i = 0; i<3; i++) {
        cout<<A[i];
    }
    return 0;
}