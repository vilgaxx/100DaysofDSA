#include<iostream>

using namespace std;


// By Using Loop 

int fact(int n) {
    int m = 1;
    for(int i= 1; i<=n; i++) {
        m *= i;
    }
    return m;
}

// By using Recursion

int factR(int n) {
    if (n==0) 
    return 1;
    return factR(n-1)*n;
}

int main() {

    cout<<fact(0)<<endl;
    cout<<factR(2);
    return 0;
}

