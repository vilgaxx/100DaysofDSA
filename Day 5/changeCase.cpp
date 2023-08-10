#include<iostream>
using namespace std;

string toggleS(string& s){

    int i;
    for (i = 0; s[i]!='\0'; i++)
    {
        if (s[i]>='a'&& s[i]<='z')
        {
             s[i] -= 32;
        }
        else if(s[i]>='A' && s[i]<='Z') {
             s[i] += 32;
        }
    }
    return s;

}

int main() {
    string s = "programmer";
    string s2 = "ProGrammer";

    int i;
    for (i = 0; s[i]!='\0'; i++)
    {
        if (s[i]>='a'&& s[i]<='z')
        {
            s[i] -= 32;
        }
    }
    cout<<toggleS(s2)<<endl;
    cout<<s;
    
}