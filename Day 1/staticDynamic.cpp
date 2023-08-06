#include<iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter a no. :";
    cin>>n;
    int A[n];

    int *p;

    p = new int[n];

    for (int i = 0; i <= n; i++)
    {
        cin>>p[i];
        /* code */
    }
    for (int i = 0; i <= n; i++)
    {
        cout<<p[i];
        /* code */
    }
    delete []p;    

    return 0;
}