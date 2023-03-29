#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    while(b!=0)
    {
        int carry=a&b;
        a=a^b;
        b=carry<<1;
    }
    cout<<"Addition of two numbers = "<<a;
}
