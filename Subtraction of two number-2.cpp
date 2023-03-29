#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    
    while(b!=0)
    {
        int borrow=~a&b;
        a=a^b;
        b=borrow<<1;
    }
    cout<<"Subtraction of two numbers = "<<a;
}
