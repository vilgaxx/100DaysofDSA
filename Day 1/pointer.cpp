#include<iostream>

using namespace std;

int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    return (*x,*y);
}

int add(int x, int y){
    int c = x+y;
    return c;
}
int main() {
    int a; int b; int j;
    cin>>a;
    cin>>b;
    j = add(a,b);
    cout<<j<<endl;
    swap(&a,&b);
    cout<<a<<"\t"<<b;
    return 0;

}