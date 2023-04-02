#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int c=__builtin_popcount(n);
    if(c==1)
    {
        int x=log2(n);
        if(x%3==0)
        cout<<"power of 8";
        else
        cout<<"Not a Power of 8";
    }
    else
    cout<<"Not a Power of 8";
}
