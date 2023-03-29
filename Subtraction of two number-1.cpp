#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    while(b!=0)
    {
        a=a^b;
        b=(a&b)<<1;
    }
    cout<<"Subtraction of two numbers = "<<a;
}
