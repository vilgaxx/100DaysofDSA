#include<iostream>

using namespace std ;

// Direct formula method 

int sumOfN(int n) {
    return n*(n+1)/2;
}

// By Using Loop

int sum(int n) {
    int sum = 0;
    for(int i = 1;i<=n;i++) {
        sum += i;
    }
    return sum;
}

// By Using recursion

int sumR(int n) {
    if(n==0) 
    return 0;
    else 
    return sumR(n-1)+n;
}

int main() {
    cout<<sumOfN(1)<<endl;
    cout<<sum(4)<<endl;
    cout<<sumR(4);
    return 0;
}





